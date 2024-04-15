import subprocess
def start():
    subprocess.call("rundll32.exe powrprof.dll,SetSuspendState 0,1,0",shell=True)