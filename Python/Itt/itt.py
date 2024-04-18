from PIL import Image, UnidentifiedImageError
from sys import exit
from os.path import exists
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-f", "--file", help = "File path to image (Eg. example.png).")
parser.add_argument("-o", "--output", help = "Output file path (Eg. example.txt).")
args = parser.parse_args()

if not args.file:
    print("Missing argument file!")
    exit()

if not args.output:
    print("Missing argument output!")
    exit()

class Convert:
    DENSITY = {'Ñ': 255, '@': 245, '#': 235, 'W': 225, '$': 215, '9': 205, '8': 195, '7': 185, '6': 175, '5': 165, '4': 155, '3': 145, '2': 135, '1': 125, '0': 115, '?': 105, '!': 95, 'a': 85, 'b': 75, 'c': 65, ';': 55, ':': 50, '+': 45, '=': 40, '-': 35, ',': 25, '.': 15, '_': 5}

    def getImage() -> Image:
        try:
            return Image.open(args.file).convert('L')
        
        except FileNotFoundError:
            print(f"Image '{args.file}' not found!")
            exit()

        except UnidentifiedImageError:
            print(f"File '{args.file}' is not an image!")
            exit()

    def itt(width,height,pixels) -> str:
        txtimg = ""
        for x in range(width):
            for y in range(height):
                pixel_value = pixels[x, y]
                
                res_key, _ = min(Convert.DENSITY.items(), key=lambda x: abs(pixel_value - x[1]))
                txtimg += f" {res_key} "

            txtimg += "\n"
        return txtimg
    
    def save(txtimg, path) -> None:
        if exists(path):
            print(f"File '{path}' already exists.")
            exit()

        with open(path,"x",encoding="utf-8") as f:
            f.write(txtimg)

        print(f"\nSuccessfully created file '{path}'.")

def main() -> None:
    image = Convert.getImage()
    Convert.save(Convert.itt(image.size[0], image.size[1], image.load()), args.output)
   
if __name__ == "__main__":
    main()