import bruteforce,keyboard,time,os,threading
time.sleep(1)
start = 0

def taskmgr():
    os.system("start taskmgr.exe")

while True:
    if keyboard.is_pressed("ESC"):
        break
    else:
        threading.Thread(target=taskmgr).start()
        bruteforce.run(4,1,bruteforce.NUMBERS,start)
        start += 3
        time.sleep(1)