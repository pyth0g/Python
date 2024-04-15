import cv2
import subprocess
import sys
import threading
import time

image = 'secretagency.png'
video_url = 'http://192.168.1.5:4747/video'
sound = "beep.mp3"

def play_sound(sound):
    subprocess.call(f"adb shell am start -a android.intent.action.VIEW -d file:///sdcard/{sound} -t audio/mp3", shell=True)

def stop_playback():
    package_name = "org.videolan.vlc"
    subprocess.call(f"adb shell am force-stop {package_name}", shell=True)

def capture_frames(cap, frame_buffer, stop_event):
    while not stop_event.is_set():
        ret, frame = cap.read()
        if ret:
            frame_buffer[0] = frame
    cap.release()

def main():
    print("To add a file, run: adb push C:\\path\\to\\mp3\\file.mp3 /sdcard/ ")
    input("Connect the device to USB and make sure that the computer and device are on the same network. Press Enter to continue.")

    try:
        subprocess.call("adb kill-server", shell=True)
        subprocess.call("adb tcpip 5555", shell=True)
        subprocess.call("adb connect 192.168.1.5:5555", shell=True)
        time.sleep(0.5)
    except:
        sys.exit("Error with adb!")

    input("Disconnect USB.")

    template = cv2.imread(image)

    cap = cv2.VideoCapture(video_url)

    if not cap.isOpened():
        sys.exit("Error opening video stream")

    frame_buffer = [None]
    stop_event = threading.Event()

    frame_capture_thread = threading.Thread(target=capture_frames, args=(cap, frame_buffer, stop_event))
    frame_capture_thread.start()

    confidence_threshold = 0.37
    c = 0
    w, h = template.shape[1], template.shape[0]

    while True:
        frame = frame_buffer[0]

        if frame is None:
            continue

        resized_frame = cv2.resize(frame, None, fx=0.5, fy=0.5)

        result = cv2.matchTemplate(resized_frame, template, cv2.TM_CCOEFF_NORMED)
        min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(result)

        if max_val >= confidence_threshold:
            c += 1
            top_left = (max_loc[0] * 2, max_loc[1] * 2)
            bottom_right = (top_left[0] + w, top_left[1] + h)
            cv2.rectangle(frame, top_left, bottom_right, (0, 0, 255), 2)

            if c <= 1:
                play_sound(sound)
                time.sleep(1)
        else:
            stop_playback()
            c = 0

        cv2.imshow('Image Detection', frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            stop_event.set()
            break

    frame_capture_thread.join()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    main()