import cv2
import numpy as np
import os

def _GiveRectImg(img,find,min_threshold):
    if type(img).__name__ == "str":
            main_image = cv2.imread(img)
    else:
        main_image = img
    if not main_image.any():
        raise FileNotFoundError(f"Cannot find file '{img}'")
    template = cv2.imread(find)
    if not template.any():
        raise FileNotFoundError(f"Cannot find file '{find}'")

    resized_template = cv2.resize(template, (int(template.shape[1] * 0.5), int(template.shape[0] * 0.5)))

    main_gray = cv2.cvtColor(main_image, cv2.COLOR_BGR2GRAY)
    template_gray = cv2.cvtColor(resized_template, cv2.COLOR_BGR2GRAY)

    result = cv2.matchTemplate(main_gray, template_gray, cv2.TM_CCOEFF_NORMED)
    threshold = min_threshold/100
    result = np.where(result >= threshold)
    top_left = None
    bottom_right = None
    for loc in zip(*result[::-1]):
        top_left = loc
        bottom_right = (top_left[0] + resized_template.shape[1], top_left[1] + resized_template.shape[0])
    return top_left,bottom_right,result

class ImgFind:
    def __init__(self):
        pass
    def StandardSearch(img,find,min_threshold,output=False):
        is_rect = False
        if type(img).__name__ == "str":
            main_image = cv2.imread(img)
        else:
            main_image = img
        if output:
            if os.path.isfile(output):
                raise FileExistsError(f"File '{output}' already exists")
        if not main_image.any():
            raise FileNotFoundError(f"Cannot find file '{img}'")
        template = cv2.imread(find)
        if not template.any():
            raise FileNotFoundError(f"Cannot find file '{find}'")

        resized_template = cv2.resize(template, (int(template.shape[1] * 0.5), int(template.shape[0] * 0.5)))

        main_gray = cv2.cvtColor(main_image, cv2.COLOR_BGR2GRAY)
        template_gray = cv2.cvtColor(resized_template, cv2.COLOR_BGR2GRAY)

        result = cv2.matchTemplate(main_gray, template_gray, cv2.TM_CCOEFF_NORMED)
        threshold = min_threshold/100
        result = np.where(result >= threshold)
        for loc in zip(*result[::-1]):
            top_left = loc
            bottom_right = (top_left[0] + resized_template.shape[1], top_left[1] + resized_template.shape[0])
            cv2.rectangle(main_image, top_left, bottom_right, (0, 0, 255), 2)

        if top_left and bottom_right:
            is_rect = True

        if output:
            cv2.imwrite(output,main_image)
        else:
            return main_image,is_rect

class VideoFind:
    def __init__(self):
        pass
    def StandardSearch(video,find,min_threshold,output):
        if os.path.isfile(output):
            raise FileExistsError(f"File '{output}' already exists")
        capture = cv2.VideoCapture(video)
        if not capture.isOpened():
            raise FileNotFoundError(f"File '{video}' not found or is corrupted")
        
        width = int(capture.get(cv2.CAP_PROP_FRAME_WIDTH))
        height = int(capture.get(cv2.CAP_PROP_FRAME_HEIGHT))
        fps = int(capture.get(cv2.CAP_PROP_FPS))

        output_video_name = output
        output_video = cv2.VideoWriter(output_video_name, cv2.VideoWriter_fourcc(*'mp4v'), fps, (width, height))

        while True:
            success, frame = capture.read()
            if not success:
                break

            processed_frame,_ = ImgFind.StandardSearch(frame, find, min_threshold)
            output_video.write(processed_frame)

        capture.release()
        output_video.release()

class AdvancedFind:
    def __init__(self):
        pass
    def StandardSearch(img,find,min_threshold,output=False):
        is_rect = False
        if type(img).__name__ == "str":
            main_image = cv2.imread(img)
        else:
            main_image = img
        if output:
            if os.path.isfile(output):
                raise FileExistsError(f"File '{output}' already exists")
        try:
            if not main_image:
                raise FileNotFoundError(f"Cannot find file '{img}'")
        except Exception:
            pass
        if not main_image.any():
            raise FileNotFoundError(f"Cannot find file '{img}'")
        if type(find) != type([]):
            raise TypeError(f"Expected type list got type {type(find).__name__}")
        for i in find:
            top_left,bottom_right,_ = _GiveRectImg(img,i,min_threshold)
            if top_left and bottom_right:
                is_rect = True
                cv2.rectangle(main_image, top_left, bottom_right, (0, 0, 255), 2)
        if output:
            cv2.imwrite(output,main_image)
        else:
            return main_image,is_rect

    def MostConfident(img,find,min_threshold,output=False,intervals=0.5):
        is_rect = False
        if type(img).__name__ == "str":
            main_image = cv2.imread(img)
        else:
            main_image = img
        try:
            if not main_image:
                raise FileNotFoundError(f"Cannot find file '{img}'")
        except Exception:
            pass
        if output:
            if os.path.isfile(output):
                raise FileExistsError(f"File '{output}' already exists")
        if not main_image.any():
            raise FileNotFoundError(f"Cannot find file '{img}'")
        if type(find) != type([]):
            raise TypeError(f"Expected type list got type {type(find).__name__}")
        end = []
        threshold = 100
        top_left,bottom_right = None,None
        while True:
            for i in find:
                rect1,rect2,result = _GiveRectImg(img,i,threshold)
                if result[0].any() and result[1].any():
                    top_left,bottom_right = rect1,rect2
                else:
                    end.append("f")
            if len(end) <= len(find)-1:
                break
            else:
                if threshold <= min_threshold:
                    break
                else:
                    threshold -= intervals
                    top_left,bottom_right = None,None
                    end = []
        if top_left and bottom_right:
            is_rect = True
            cv2.rectangle(main_image, top_left, bottom_right, (0, 0, 255), 2)

        if output:
            cv2.imwrite(output,main_image)
        else:
            return main_image,is_rect