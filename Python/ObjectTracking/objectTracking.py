import cv2
import numpy as np

def Track(img,find,min_threshold):

    gray_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    gray_template = cv2.cvtColor(cv2.resize(find, (int(find.shape[1] * 0.5), int(find.shape[0] * 0.5))), cv2.COLOR_BGR2GRAY)

    result = cv2.matchTemplate(gray_img, gray_template, cv2.TM_CCOEFF_NORMED)
    threshold = min_threshold/100
    result = np.where(result >= threshold)
    top_left = None
    bottom_right = None
    for loc in zip(*result[::-1]):
        top_left = loc
        bottom_right = (top_left[0] + gray_template.shape[1], top_left[1] + gray_template.shape[0])
    return top_left,bottom_right