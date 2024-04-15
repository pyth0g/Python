import MorseCode

morse = MorseCode.TextToMorse(input("Convert To Morse: "))
print(morse)
MorseCode.Sound(morse)
text = MorseCode.MorseToText(input("Convert To Text:"))
print(text)