import math
import pyautogui
import ctypes
import win32gui

radius = 20

def _distance(point1, point2):
    return math.sqrt((point2[0] - point1[0]) ** 2 + (point2[1] - point1[1]) ** 2)

def is_mouse_on_desktop():
    hwnd = win32gui.WindowFromPoint(win32gui.GetCursorPos())
    if "FolderView" in win32gui.GetWindowText(hwnd):
        return True

def mouse_radius(point: tuple):
    mouse_position = pyautogui.position()
    dist = _distance(point, mouse_position)
    
    if dist <= radius and ctypes.windll.user32.GetKeyState(0x01) not in [0, 1]:
        return is_mouse_on_desktop()
    
    return False

def mouse_rect(x1,y1,x2,y2):
    mouse_position = pyautogui.position()

    if x1 < mouse_position[0] < x2 and y1 < mouse_position[1] < y2 and ctypes.windll.user32.GetKeyState(0x01) not in [0, 1]:
        return is_mouse_on_desktop()
    
    return False