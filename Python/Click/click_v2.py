from ahk import AHK
import time
from tkinter import StringVar,PhotoImage
import tkinter as tk
import ttkbootstrap as ttk
import threading
import win32api
import os

#codes at: https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

l_click_code = 0x01
r_click_code = 0x02
m_click_code = 0x04
run = True
ahk = AHK()
num = 0
code = ""
messure = False
hotkey = "g"
path = ".\output"

#root
root = ttk.Window(themename="darkly")
root.title("Click")
root.geometry("300x250")
icon = PhotoImage(file="cursor.png")
root.iconphoto(False,icon)

#def
def get_hotkey():
    global hotkey
    hotkey = hotkey_entry.get()
    time.sleep(0.2)
    hotkey_entry.set("")

def checkbox(text,command):
    input_frame = ttk.Frame(master=root)
    checkbox = ttk.Checkbutton(master=input_frame,text=text,command=command,onvalue=1,offvalue=0)
    checkbox.pack()
    input_frame.pack()

def checkbox_left(text,command):
    input_frame = ttk.Frame(master=root)
    checkbox = ttk.Checkbutton(master=input_frame,text=text,command=command,onvalue=1,offvalue=0)
    checkbox.pack(side="left")
    input_frame.pack()

def button(text,command):
    input_frame = ttk.Frame(master=root)
    button = ttk.Button(master=input_frame,text=text,command=command)
    button.pack(side="left")
    input_frame.pack()

def label(text):
    input_frame = ttk.Frame(master=root)
    label = ttk.Label(master=input_frame,text=text,font="Calibri 14")
    label.pack(pady=5)
    input_frame.pack()

def label_small(text):
    input_frame = ttk.Frame(master=root)
    label = ttk.Label(master=input_frame,text=text,font="Calibri 12")
    label.pack(pady=5)
    input_frame.pack()

def input_hotkey(text,command):
    global hotkey_entry
    input_frame = ttk.Frame(master=root)
    hotkey_entry = tk.StringVar()
    entry = ttk.Entry(master=input_frame,textvariable=hotkey_entry)
    button = ttk.Button(master=input_frame, text= text, command= command)
    button.pack(side = "left",padx=10)
    entry.pack(side = "left",pady=5)
    input_frame.pack()

#functions

def l_click():
    global run
    global coords
    global code
    if win32api.GetKeyState(l_click_code) < 0:
        coords = ("    "+"ahk.click"+str(ahk.mouse_position).replace(")", "")+",button='L'"")\n    time.sleep(0.1)\n")
        code = (code+coords)
        time.sleep(0.2)
    else:
        pass

def r_click():
    global run
    global coords
    global code
    if win32api.GetKeyState(r_click_code) < 0:
        coords = ("    "+"ahk.click"+str(ahk.mouse_position).replace(")", "")+",button='R'"")\n    time.sleep(0.1)\n")
        code = (code+coords)
        time.sleep(0.2)
    else:
        pass

def m_click():
    global run
    global coords
    global code
    if win32api.GetKeyState(m_click_code) < 0:
        coords = ("    "+"ahk.click"+str(ahk.mouse_position).replace(")", "")+",button='M'"")\n    time.sleep(0.1)\n")
        code = (code+coords)
        time.sleep(0.2)
    else:
        pass

def save():
        print("[INFO] Saving...")
        global num
        num = 0
        Error = True
        while Error:
            num = str(num)
            try:os.mkdir(path)

            except FileExistsError:
                pass
            try:
                new_txt()
            except FileExistsError:
                num = int(num)+1
            else:
                Error = False

def new_txt():
    global code
    with open(path+"\\"+str(num) + "_output.py", "x") as f:
        f.write("from ahk import AHK\n")
        f.write("import time\n")
        f.write("ahk=AHK()\n")
        with open(path+"\\"+str(num) + "_output.py", "w") as f:
            f.write("                                             def run():\n")
            f.write(code)
            f.write("ahk.add_hotkey('^#"+hotkey+"',callback = run)\nahk.start_hotkeys()\nahk.block_forever()")
        print("[INFO] Saved")

#script
def script():
    while messure:
        l_click()
        r_click()
        m_click()

def stop():
    print("[INFO] Stopped Listening")
    global messure
    messure = False
    save()

def script_t():
    print("[INFO] Started Listening")
    global messure
    messure = True
    threading.Thread(target=script).start()

#hotkeys
ahk.add_hotkey("^#s", callback=script_t)
ahk.add_hotkey("^#d", callback=stop)
ahk.start_hotkeys()

#start
def gui():
    label(text="Start: Ctrl + ⊞Win + S")
    label(text="Done + Save: Ctrl + ⊞Win + D")
    label(text="")
    label("Hotkey For Start (Ctrl + ⊞Win +)")
    input_hotkey(text="DONE",command=get_hotkey)


    root.mainloop()
gui()

ahk.block_forever()