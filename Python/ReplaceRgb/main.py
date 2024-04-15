import cv2
import os
import numpy as np

file = input("File path: ")
if file[0] == '"' and file[-1] == '"':
    file = file[1:-1]
bgr_pairs = [((50,50,50),(49,38,185)),
             ((70,70,70),(171,197,248)),
             ((90,90,90),(129,164,243)),
             ((110,110,110),(199,219,253)),
             ]
c = 0
result = f"{os.path.splitext(file)[0]}_{c}{os.path.splitext(file)[1]}"
while os.path.exists(result):
    c += 1
    result = f"{os.path.splitext(file)[0]}_{c}{os.path.splitext(file)[1]}"

img = cv2.imread(file)

for i in bgr_pairs:
    try:
        img[np.all(img == i[0], axis=-1)] = i[1]
    except TypeError:
        print("File not found!")
        exit()

cv2.imwrite(result,img)

print(f"Successfully created '{result}'.")