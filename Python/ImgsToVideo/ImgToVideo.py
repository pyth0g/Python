import os
import cv2

def create(imgs, output, FPS):
    if os.path.isfile(output):
        raise FileExistsError(f"File '{output}' already exists")

    try:
        img = cv2.imread(imgs[0])
        height, width, _ = img.shape
    except Exception as e:
        raise TypeError(f"Error reading image: {e}")

    fps = FPS

    output_video_name = output
    fourcc = cv2.VideoWriter_fourcc(*'H264')

    output_video = cv2.VideoWriter(output_video_name, fourcc, fps, (width, height))

    for img_path in imgs:
        try:
            frame = cv2.imread(img_path)
            output_video.write(frame)
        except Exception as e:
            raise RuntimeError(f"Error processing image {img_path}: {e}")

    output_video.release()