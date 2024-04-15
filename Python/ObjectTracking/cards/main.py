from objectTracking import AdvancedFind
import cv2

IP = "192.168.1.5"
PORT = "4747"
URL = f"http://{IP}:{PORT}/video"

cap = cv2.VideoCapture(URL)

while True:
    ret, frame = cap.read()
    if ret:
        result,rect = AdvancedFind.StandardSearch(frame,["1.jpg","2.jpg","3.jpg","4.jpg","5.jpg","6.jpg","7.jpg"],30)
        if rect:
            print("Found")
        cv2.imshow("Output",result)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    else:
        raise ConnectionRefusedError("Start droid cam and make sure you are on the same network and that no other devices are connected to it already")

cap.release()
cv2.destroyAllWindows()