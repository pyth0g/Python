from PIL import Image
import os
import os.path

class Convert:
    print("Image to text.\nBy https://github.com/pyth0g\n")
    DENSITY = {'Ñ': 255, '@': 245, '#': 235, 'W': 225, '$': 215, '9': 205, '8': 195, '7': 185, '6': 175, '5': 165, '4': 155, '3': 145, '2': 135, '1': 125, '0': 115, '?': 105, '!': 95, 'a': 85, 'b': 75, 'c': 65, ';': 55, ':': 50, '+': 45, '=': 40, '-': 35, ',': 25, '.': 15, '_': 5}
    num = 0

    def CreateOutputFolder() -> None:
        if os.path.exists("./Output") == False:
            os.mkdir("./Output")

    def FindImage() -> Image:
        file = input("Name of the image (E.g. example.png): ")

        try:
            image = Image.open(file)
            image = image.convert('L')
            
            return image
        except FileNotFoundError:
            print("Image not found!")
            exit()

    def ProcessImage(image):
        image = image.rotate(90, expand=True)
        
        return image.load(),image.size[0], image.size[1]

    def ConvertImageToText(width,height,pixels):
        txtimg = ""
        for x in range(width):
            for y in range(height):
                pixel_value = pixels[x, y]
                
                res_key, _ = min(Convert.DENSITY.items(), key=lambda x: abs(pixel_value - x[1]))
                txtimg += f" {res_key} "

            txtimg += "\n"
        return txtimg

    def Finish(txtimg):
        save = input("Save image to file or print it to terminal [f/p] (default p): ")
        if save == "f":
            Convert.Save(txtimg)

        else:
            Convert.Terminal(txtimg)

    def Save(txtimg):
        Convert.CreateOutputFolder()
        num = str(Convert.num)
        while True:
            if os.path.exists(f"./Output/output_{num}.txt") == False:
                with open(f"Output/output_{num}.txt","x",encoding="utf-8") as f:
                    f.write(txtimg)
                print(f"\nSuccessfully saved in Output/output_{num}.txt.")
                break
            elif os.path.exists(f"./Output/output_{num}.txt") == True: 
                num = int(num)+1
            
    def Terminal(txtimg):
        os.system("cls")
        print(txtimg)
        input()
        return True

def main():
    img = Convert.FindImage()

    if img: 
        image = img
    else: 
        print("Image not found!")
        exit()

    pixels,width,height = Convert.ProcessImage(image)
    Convert.Finish(Convert.ConvertImageToText(width,height,pixels))
   
if __name__ == "__main__":
    main()