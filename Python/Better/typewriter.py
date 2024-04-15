import random
import threading
from pydub import AudioSegment
from pydub.playback import play
from better import Better
import os
import time

typewriter = r"C:\Users\lenar\OneDrive\PYthon\Better\typewriter"

blink = 0
_str = ""
end = False

with open(r"C:\Users\lenar\OneDrive\PYthon\Better\text.txt") as f:
    text = f.read()

def load_key():
    key = random.randrange(0,9)
    return AudioSegment.from_file(os.path.join(typewriter, f"key{key}.mp3"))

def load_scroll():
    return AudioSegment.from_file(os.path.join(typewriter, "scroll.mp3"))

def play_audio(audio):
    play(audio)

def display(_):
    global blink, _str, end
    while True:
        if end and _==False: break
        if blink > 2:
            blink = 0
        else:
            blink += 8/int(10**5)
        
        Better.override_print(_str + "|" if blink < 1 else _str + " ")

        if _: break

alt = True
typing_speed = 26/100
threads = []
plane_str = ""
t = threading.Thread(target=display,args=(False,))
threads.append(t)
t.start()
for i in text:
    plane_str += i
    _str += i
    audio_segment = None

    if i == "\n":
        play_audio(load_scroll())
    
    else:
        if alt:
            if i != "\n":
                audio_segment = load_key()
            alt = False

        else:
            alt = True
            time.sleep(typing_speed)

        if audio_segment:
            t = threading.Thread(target=play_audio, args=(audio_segment,))
            threads.append(t)
            t.start()

    if len(text) == len(plane_str):
        end = True

Better.override_print("\n")
Better.override_print(_str)

for t in threads:
    t.join()

time.sleep(0.2)
play(AudioSegment.from_file(os.path.join(typewriter, "ding.mp3")))
time.sleep(0.15)
play_audio(load_scroll())