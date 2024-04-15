import objectTracking
import cv2

main_image = cv2.imread("find.jpg")

cap = cv2.VideoCapture("http://192.168.1.5:4747/video")

while True:
    ret, frame = cap.read()
    if ret:
        top_left, bottom_right = objectTracking.Track(frame,cv2.imread("find.jpg"),40)
        if top_left and bottom_right:
            print(f"Found at: {top_left},{bottom_right}")
    else:
        raise ConnectionRefusedError("Start droid cam and make sure you are on the same network and that no other devices are connected to it already")