import argparse
import cv2
import os
import subprocess
import numpy as np

parser = argparse.ArgumentParser()
parser.add_argument("-m", "--mode", help = "Specify if you are creating or reading [create / read]. E.g. 'lsb -m create' / 'lsb -m read'")
parser.add_argument("-P", "--Path", help = "Specify image path. (Required for both modes). E.g. 'lsb -m create -P img.png' / 'lsb -m read -P img.png'")
parser.add_argument("-t", "--text", help = "Specify what text to encode into image. (Optional (if -f present) for create). E.g. 'lsb -m create -P img.png -t \"Hello World\"'")
parser.add_argument("-f", "--file", help = "Specify what file to encode into image. (Optional (if -t present) for create). E.g. 'lsb -m create -P img.png -f example.txt'")
parser.add_argument("-p", "--print", help = "Specify whether to display the output in the terminal. (Optional (if -o present) for read). E.g. 'lsb -m read -P data.png -p'", action='store_true')
parser.add_argument("-o", "--output", help = "Specify whether to display the output in the terminal. (Optional (if -p present) for read). E.g. 'lsb -m read -P data.png -o output.txt'")

args = parser.parse_args()

def exit():
    __import__("sys").exit()

class Display:
    # Print iterations progress
    def printProgressBar (iteration, total, prefix = '', suffix = '', decimals = 1, length = 100, fill = '█', printEnd = "\r"):
        """
        Call in a loop to create terminal progress bar
        @params:
            iteration   - Required  : current iteration (Int)
            total       - Required  : total iterations (Int)
            prefix      - Optional  : prefix string (Str)
            suffix      - Optional  : suffix string (Str)
            decimals    - Optional  : positive number of decimals in percent complete (Int)
            length      - Optional  : character length of bar (Int)
            fill        - Optional  : bar fill character (Str)
            printEnd    - Optional  : end character (e.g. "\r", "\r\n") (Str)
        """
        percent = ("{0:." + str(decimals) + "f}").format(100 * (iteration / float(total)))
        filledLength = int(length * iteration // total)
        bar = fill * filledLength + '-' * (length - filledLength)
        print(f'\r{prefix} |{bar}| {percent}% {suffix}', end = printEnd)
        # Print New Line on Complete
        if iteration == total: 
            print()

def fatal(string: str):
    return f"[FATAL] {string}"

def warning(string: str):
    return f"[WARNING] {string}"

def info(string: str):
    return f"[INFO] {string}"

def create(file: str, torf: str, put: str, input_file: str):
    if os.path.exists(file) != True:
        print(fatal(f"File '{file}' not found!"))
        exit()

    if torf.lower() == "f":
        if os.path.exists(input_file) != True:
            print(fatal(f"File '{input_file}' not found!"))
            exit()

        try:
            with open(input_file,"r") as f:
                put = f.read()
        except UnicodeDecodeError:
            print(warning("File contains special characters, some may be lost!"))
            put = subprocess.check_output(f"cmd /c type {input_file}", shell=True).decode("latin-1")

        except:    
            print(fatal(f"File '{input_file}' cannot be read, because it contains special characters!"))
            exit()

    img = cv2.imread(file)
    height, width, channels = img.shape

    color = []
    bits = []
    final = []

    c = 0

    put += "0"

    for i in put:
        for j in bin(ord(i))[2:].rjust(8,"0"):
            bits.append(j)

    color = img.tolist()

    Display.printProgressBar(0,len(color))
    for k, block in enumerate(color):
        cnvt = []
        for i in block:
            try:
                if c < len(bits) - 1: s1, s2, s3 = bits[c], bits[c+1], bits[c+2]
            except IndexError:
                s3 = "0"
            cnvt.append([
                int((bin(i[0])[2:])[:-1] + s1, 2),
                int((bin(i[1])[2:])[:-1] + s2, 2),
                int((bin(i[2])[2:])[:-1] + s3, 2)
                        ])
            
            c += 3

        
        Display.printProgressBar(k + 1, len(color))

        final.append(cnvt)

    print()

    c = 0
    filename = f"{"".join(file.split(".")[:-1])}.extradata_{c}.png"

    while os.path.exists(filename):
        c += 1
        filename = f"{"".join(file.split(".")[:-1])}.extradata_{c}.png"

    cv2.imwrite(filename, np.array(final).astype(np.uint8).reshape((height, width, channels)))
    print(info(f"Successfully created file '{filename}'."))

def read(file: str, save: str, save_spot: str):
    if os.path.exists(file) != True:
        f"\033[38;5;196m[FATAL] File '{file}' not found!\033[0m"
        exit()

    img = cv2.imread(file)

    def remove_until(char: str, string: str):
        char_index = string.rfind(char)
        
        if char_index == -1:
            return string
        
        return string[:char_index]

    color = []
    final = ""
    bits = []

    c = 0

    color = img.tolist()


    Display.printProgressBar(0, len(color))

    for j, block in enumerate(color):
        for i in block:
            bits.append((bin(i[0])[2:])[-1])
            bits.append((bin(i[1])[2:])[-1])
            bits.append((bin(i[2])[2:])[-1])
            
            c += 3
        
        Display.printProgressBar(j + 1, len(color))

    print()

    lensplit = lambda string, length: [string[i:i+length] for i in range(0, len(string), length)]

    bits = lensplit("".join(bits),8)

    Display.printProgressBar(0, len(bits))

    for j, i in enumerate(bits):
        final += chr(int(i, 2))

        Display.printProgressBar(j + 1, len(bits))

    print()

    final = remove_until("0",final)

    if save.lower() == "s":
        with open(save_spot,"w") as f:
            f.write(final)

    elif save.lower() == "p":
        just = len(max(final.split("\n"), key=len))

        print(f"Contents:\n{'-'*(just + 4)}")
        for i in final.split("\n"):
            print(("| "+i).ljust(just)+" |")
        print("-"*(just + 4))

    else:
        just = len(max(final.split("\n"), key=len))

        print(f"Contents:\n{'-'*(just + 4)}")
        for i in final.split("\n"):
            print(("| "+i).ljust(just)+" |")
        print("-"*(just + 4))

        with open(save_spot,"w") as f:
            f.write(final)

def main():
    if not args.mode:
        print(fatal("No mode argument supplied!"))
        exit()

    if not args.Path:
        print(fatal("No path argument supplied!"))
        exit()

    if args.mode == "create" or args.mode == "c":
        if not args.text and not args.file:
            print(fatal("Neither text or file argument supplied!"))
            exit()

        if args.text and not args.file:
            create(args.Path, "t", args.text, "")

        if args.file and not args.text:
            create(args.Path, "f", "", args.file)

        if args.text and args.file:
            print(fatal("Can only pass in text or file not both!"))


    elif args.mode == "read" or args.mode == "r":
        if args.print and not args.output:
            read(args.Path, "p", "")

        if args.output and not args.print:
            read(args.Path, "f", args.output)

        if args.output and args.print:
            read(args.Path, "b", args.output)
        

    else:
        print(fatal("Invalid argument for mode!"))
        exit()

if __name__ == "__main__":
    main()