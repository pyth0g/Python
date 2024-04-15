import winsound
import time

def TextToMorse(word):
    morse = []
    codes = {"a": ".-", "b": "-...", "c": "-.-.", "d": "-..", "e": ".", "f": "..-.", "g": "--.", "h": "....", "i": "..", "j": ".---", "k": "-.-", "l": ".-..", "m": "--", "n": "-.", "o": "---", "p": ".--.", "q": "--.-", "r": ".-.", "s": "...", "t": "-", "u": "..-", "v": "...-", "w": ".--", "x": "-..-", "y": "-.--", "z": "--..", "1": ".----", "2": "..---", "3": "...--", "4": "....-", "5": ".....", "6": "-....", "7": "--...", "8": "---..", "9": "----.", "0": "-----", ".": ".-.-.-", ",": "--..--", "?": "..--..", "'": ".----.", "!": "-.-.--", "/": "-..-.", "(": "-.--.", ")": "-.--.-", "&": ".-...", ":": "---...", ";": "-.-.-.", "=": "-...-", "+": ".-.-.", "-": "-....-", "_": "..--.-", "\"": ".-..-.", "$": "...-..-", "@": ".--.-.", " ": " "}
    for letter in word:
        try:
            morse.append(codes[letter.lower()])
        except:
            print(f"{letter} is not supported!")
            break
    return " ".join(morse)

def MorseToText(morse):
    try:
        morse = morse.split(" ")
    except:
        pass
    word = []
    codes = {".-": "a", "-...": "b", "-.-.": "c", "-..": "d", ".": "e", "..-.": "f", "--.": "g", "....": "h", "..": "i", ".---": "j", "-.-": "k", ".-..": "l", "--": "m", "-.": "n", "---": "o", ".--.": "p", "--.-": "q", ".-.": "r", "...": "s", "-": "t", "..-": "u", "...-": "v", ".--": "w", "-..-": "x", "-.--": "y", "--..": "z", ".----": "1", "..---": "2", "...--": "3", "....-": "4", ".....": "5", "-....": "6", "--...": "7", "---..": "8", "----.": "9", "-----": "0", ".-.-.-": ".", "--..--": ",", "..--..": "?", ".----.": "'", "-.-.--": "!", "-..-.": "/", "-.--.": "(", "-.--.-": ")", ".-...": "&", "---...": ":", "-.-.-.": ";", "-...-": "=", ".-.-.": "+", "-....-": "-", "..--.-": "_", ".-..-.": "\"", "...-..-": "$", ".--.-.": "@", " ": " "}
    for code in morse:
        try:
            word.append(codes[code])
        except:
            print(f"{code} is not supported!")
            break
    return "".join(word)

def Sound(morse):
    frequency = 800
    morse_code = morse.split(",")
    for i in morse_code:
        signs = [*i]
        for sign in signs:
            if sign == ".":
                duration = 200
                winsound.Beep(frequency, duration)
            elif sign == "-":
                duration = 600
                winsound.Beep(frequency, duration)
            else:
                time.sleep(1)
        time.sleep(0.2)
        