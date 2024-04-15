import cv2

# URL for the DroidCam video stream (replace with your DroidCam URL)
video_url = 'http://192.168.1.5:4747/video'

# Create a VideoCapture object to access the DroidCam video stream
cap = cv2.VideoCapture(video_url)

while True:
    ret, frame = cap.read()

    if not ret:
        print("Failed to capture frame.")
        break

    cv2.imshow('DroidCam Video Stream', frame)

    # Exit the loop when 'q' is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()