import tkinter as tk
import sleep
import keyboard
import sys
from ctypes import POINTER, cast
from comtypes import CLSCTX_ALL
from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume
root = tk.Tk()
notallowed = ["1","2","3","4","5","6","7","8","9","0","q","w","e","r","t","z","u","i","o","p","š","đ","a","s","d","f","g","h","j","k","l","č","ć","ž","y","x","c","v","b","n","m"]
def on_key_event(event):
    if event.event_type == keyboard.KEY_DOWN:
        key_name = event.name
        if key_name not in notallowed:
            set_mute(False)
            sleep.start()
            root.destroy()
            sys.exit()

def set_mute(mute):
    keyboard.press("F11")
    devices = AudioUtilities.GetSpeakers()
    interface = devices.Activate(
        IAudioEndpointVolume._iid_, CLSCTX_ALL, None)
    volume = cast(interface, POINTER(IAudioEndpointVolume))
    volume.SetMute(mute, None)

keyboard.hook(on_key_event)
set_mute(True)
root.config(cursor="none")
root.attributes("-fullscreen", True)
root.title("x68WinBOSD-x1")
root.geometry("1920x1080")
bg_color = "#{:02X}{:02X}{:02X}".format(2, 113, 170)
root.configure(bg=bg_color)
label = tk.Label(root, text=":(", fg="white", bg=bg_color, font=("Segoe UI", 72))
label.pack(pady=20, padx=20, anchor="nw")
nl = tk.Label(root,text="\n", fg="white", bg=bg_color, font=("Segoe UI", 12))
t1 = tk.Label(root, text="Your PC ran into a problem and needs to restart. We're", fg="white", bg=bg_color, font=("Segoe UI", 12))
t2 = tk.Label(root, text="just collecting some error info, and then you can restart.", fg="white", bg=bg_color, font=("Segoe UI", 12))
t3 = tk.Label(root,text="restart.", fg="white", bg=bg_color, font=("Segoe UI", 12))
t4 = tk.Label(root, text="\n0% complete", fg="white", bg=bg_color, font=("Segoe UI", 12))
t5 = tk.Label(root,text="For more information about this issue and possible fixes, visit https://www.windows.com/stopcode", fg="white", bg=bg_color, font=("Segoe UI", 8))
image_data = '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'
image = tk.PhotoImage(data=image_data)
image_label = tk.Label(root, image=image)
t6 = tk.Label(root,text="\nIf you can call a support person give them this info:", fg="white", bg=bg_color, font=("Segoe UI", 8))
t7 = tk.Label(root,text="Stop code: DRIVER_CORRUPTION_ERROR", fg="white", bg=bg_color, font=("Segoe UI", 8))
t1.pack(padx=20, anchor="nw")
t2.pack(padx=20, anchor="nw")
t3.pack(padx=20, anchor="nw")
t4.pack(padx=20, anchor="nw")
nl.pack()
image_label.pack(padx=10,anchor="nw",side=tk.LEFT)
t5.pack(anchor="nw")
t6.pack(anchor="nw")
t7.pack(anchor="nw")
root.mainloop()
set_mute(False)
keyboard.unhook_all()
sys.exit()