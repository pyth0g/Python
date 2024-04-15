import speech_recognition as sr
import os
import os.path

filename = input("Filename(E.g. example.mp3,example.wav,...): ")
filename = ("./Audio/"+filename)

num = 0
saving = True
output_create = True
audio_create = True
r = sr.Recognizer()

#create output folder
while audio_create:
    num = str(num)
    if os.path.exists("./Audio") == False:
        os.mkdir("./Audio")
        audio_create = False
    else:
        audio_create = False 
        pass

while output_create:
    num = str(num)
    if os.path.exists("./Output") == False:
        os.mkdir("./Output")
        output_create = False
    else:
        output_create = False 
        pass

# open the file
with sr.AudioFile(filename) as source:
    # listen for the data (load audio to memory)
    r.adjust_for_ambient_noise(source, duration=0.1)
    audio_data = r.listen(source)
    # recognize (convert from speech to text)
    text = r.recognize_google(audio_data)

#save
while saving:
    num = str(num)
    if os.path.exists("./Output/output_"+num+".txt") == False:
        with open("Output/output_"+num+".txt","x") as f:
            f.write(text)
        saving = False
    if os.path.exists("./Output/output_"+num+".txt") == True: 
        num = int(num)+1
print("Succesfully created the file")