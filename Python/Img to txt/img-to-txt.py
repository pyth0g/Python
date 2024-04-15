#Copyright 2023, by https://github.com/pyth0g, All rights reserved

#!/usr/bin/env python3
from PIL import Image
import os
import os.path
import sys
class Convert:
    os.system("cls")
    print("Made by https://github.com/pyth0g\n")
    BLACK = "◼️"
    WHITE = "◻️"
    num = 0

    def CreateOutputFolder():
        if os.path.exists("./Output") == False:
            os.mkdir("./Output")
            return False
        else:
            return False

    def CreateImageFolder():
        if os.path.exists("./Img") == False:
            os.mkdir("./Img")
            return False
        else:
            return False


    def FindImage():
        file = input("Name of the image (E.g. example.png): ")

        file = ("./Img/"+file)

        try:
            image = Image.open(file)
            image = image.convert("1")
            return image
        except:
            print("File was not found!")
            return None

    def ProcessImage(image):
        white = input("Character for white color or enter: ")
        black = input("Character for black color or enter: ")

        if white == "":
            white = Convert.WHITE

        if black == "":
            black = Convert.BLACK

        image = image.rotate(90, expand=True)

        #convert to txt
        # Get the pixel data from the image
        pixels = image.load()

        # Get the width and height of the image
        width, height = image.size

        return black,white,pixels,width,height

    def ConvertImageToText(width,height,pixels,BLACK,WHITE):
        #Create text image
        txtimg = ""
        # Loop through each pixel to find the black and white ones (RGB values close to (0, 0, 0) and (255, 255, 255))
        for x in range(width):
            for y in range(height):
                pixel_value = pixels[x, y]

                # Check if the pixel is close to black (color value of 0)
                if pixel_value == 0:
                    txtimg = (txtimg+BLACK)
                # Check if the pixel is close to white (color value of 255)
                elif pixel_value == 255:
                    txtimg = (txtimg+WHITE)
            txtimg += "\n"
        return txtimg

    def Set():
        save = input("Save image to file or print it to terminal (f/p): ")
        if save == "f":
            return "File"
            #saving = True
            #setting = False
        elif save == "p":
            return "Print"
            #terminal = True
            #setting = False
        else:
            print("Not a valid option do 'f' or 'p'.")
            return None

    def Save(txtimg):
        num = str(Convert.num)
        while True:
            if os.path.exists("./Output/output_"+str(num)+".txt") == False:
                with open("Output/output_"+str(num)+".txt","x",encoding="utf-8") as f:
                    f.write(txtimg)
                print("\nSuccesfully created the file\n")
                break
            elif os.path.exists("./Output/output_"+str(num)+".txt") == True: 
                num = int(num)+1
            
    def Terminal(txtimg):
        os.system("cls")
        print(txtimg)
        input()
        return True

def main():
    #Run code
    Convert.CreateOutputFolder()
    Convert.CreateImageFolder()
    img = Convert.FindImage()
    if img: image = img
    else: sys.exit(0)
    BLACK,WHITE,pixels,width,height = Convert.ProcessImage(image)
    txtimg = Convert.ConvertImageToText(width,height,pixels,BLACK,WHITE)
    set = Convert.Set()
    while not set: set = Convert.Set()
    if set == "File": Convert.Save(txtimg)
    elif set == "Print": Convert.Terminal(txtimg)

while True:    
    if __name__ == "__main__":
        main()