from ahk import AHK
import time
ahk=AHK()
run= True
def start():
    while run:
        ahk.click()
        time.sleep(1)
def stop():
    global run
    run = False
ahk.add_hotkey('^#g',callback = start)
ahk.add_hotkey("^#h",callback=stop)
ahk.start_hotkeys()
ahk.block_forever()