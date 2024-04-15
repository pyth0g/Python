import pyttsx3
import os
import os.path

print("[INFO] Started")
engine = pyttsx3.init()

#Define
male = 0
female = 1
num = 0
saving = True
txt_create = True
output_create = True

#Create the Txt folder
while txt_create:
    num = str(num)
    if os.path.exists("./Txt") == False:
        os.mkdir("./Txt")
        txt_create = False
    else:
        txt_create = False 
        pass

while output_create:
    num = str(num)
    if os.path.exists("./Output") == False:
        os.mkdir("./Output")
        output_create = False
    else:
        output_create = False 
        pass


#Create the .mp3 file
type = input("txt/say: ")
if type == "txt":
    text = input("Name of the txt file (E.g. example.txt would be example + make sure that the file is inside the Txt folder): ")
    path = ("./Txt/"+text+".txt")
    with open(path) as f:
        text = f.read()
else:
    text=input("Say: ")

#Settings
rate_set = input("Change the speaking rate (+,-): ")
volume_set = input("Change the volume (+,-): ")
voice_set = input("Voice (m,f): ")

#Config
if voice_set == "f":
    voice_set = female
else: 
    voice_set = male
if volume_set == "":
    volume_set = "+0"
if rate_set == "":
    rate_set = "+0"

#Properties
rate = engine.getProperty('rate')
engine.setProperty('rate', rate_set)

volume = engine.getProperty('volume')
engine.setProperty('volume', volume_set)

voices = engine.getProperty('voices')
engine.setProperty('voice', voices[voice_set].id)

#Save .mp3 file
while saving:
    num = str(num)
    if os.path.exists("./Output/output_"+num+".mp3") == False:
        engine.save_to_file(text,"Output/output_"+num+".mp3")
        saving = False
    if os.path.exists("./Output/output_"+num+".mp3") == True: 
        num = int(num)+1
engine.runAndWait()
print("Succesfully created the file")