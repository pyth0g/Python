from djitellopy import Tello
import cv2

print("Tello Drone Control Program")
print("Controls:")
print("   'w' - Move forward")
print("   's' - Move backward")
print("   'a' - Move left")
print("   'd' - Move right")
print("   't' - Takeoff")
print("   'l' - Land")
print("   'p' - Take picture")
print("   Up Arrow - Move up")
print("   Down Arrow - Move down")
print("   'r' - Rotate clockwise")
print("   'f' - Flip (enter flip direction)")
print("   'ESC' - Exit")

# Define movement speeds
SPEED = 50
SPEED_ROTATE = 50

# Initialize the drone
drone = Tello()
drone.connect()
drone.streamon()

# Function to stop all movement
def stop():
    drone.send_rc_control(0, 0, 0, 0)
    # Release resources
    drone.streamoff()
    cv2.destroyAllWindows()

while True:
    frame = drone.get_frame_read().frame

    # Get battery level
    battery_level = drone.get_battery()
    battery_text = f'Battery: {battery_level}%'

    # Determine text color based on battery level
    text_color = (0, 255, 0) if battery_level >= 20 else (0, 0, 255)

    # Add battery text to the frame
    cv2.putText(frame, battery_text, (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1, text_color, 2)

    # Display the video stream
    cv2.imshow('Tello Video Stream', frame)

    # Control commands
    key = cv2.waitKey(1) & 0xFF

    # Movement commands
    if key == ord('w'):
        drone.send_rc_control(0, SPEED, 0, 0)
    elif key == ord('s'):
        drone.send_rc_control(0, -SPEED, 0, 0)
    elif key == ord('a'):
        drone.send_rc_control(-SPEED, 0, 0, 0)
    elif key == ord('d'):
        drone.send_rc_control(SPEED, 0, 0, 0)
    elif key == ord('r'):
        drone.send_rc_control(0, 0, 0, SPEED_ROTATE)
    elif key == ord('t'):
        drone.takeoff()
    elif key == ord('l'):
        drone.land()
    elif key == ord('p'):
        drone.take_picture()
    elif key == ord('f'):
        flip_direction = input("Enter flip direction (l/r/f/b): ")
        drone.flip(flip_direction)
    elif key == 27:  # ESC key
        drone.land()
        stop()