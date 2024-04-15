import cv2
import numpy as np

average_color = None

def get_average_color(event, x, y, flags, param):
    global average_color

    if event == cv2.EVENT_MOUSEMOVE:
        cropped_image = frame[y-5:y+5, x-5:x+5]  # Capture a small region around the mouse cursor
        average_color = np.mean(cropped_image, axis=(0, 1))  # Calculate the average color
        print(f'Average RGB value at ({x}, {y}): {average_color}')

video_url = 'http://192.168.1.5:4747/video'

cap = cv2.VideoCapture(video_url)

cv2.namedWindow('Image')
cv2.setMouseCallback('Image', get_average_color)

while True:
    ret, frame = cap.read()

    if not ret:
        break

    if average_color is not None:
        cv2.putText(frame, f'Average RGB: {average_color}', (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2)

    cv2.imshow('Image', frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()