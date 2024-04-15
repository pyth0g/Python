import cv2
import os
import subprocess
import numpy as np

class Display:
    def s_input(string: str):
        csi_up = "\x1B[1A"
        csi_clr= "\x1B[0K"

        usr = input(string)
        print(csi_up * 3)
        print(csi_clr)
        print(csi_up * 2)

        return usr
    
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

def main():
    os.system("cls")
    file = Display.s_input("Original Image Path > ")
    os.system("cls")

    def fatal(string: str):
        return f"\033[38;5;160m[FATAL] {string}\033[0m"

    def warning(string: str):
        return f"\033[38;5;220m[WARNING] {string}\033[0m"

    def info(string: str):
        return f"[INFO] {string}"

    if os.path.exists(file) != True:
        print(fatal(f"File '{file}' not found!"))
        exit()

    while True:
        torf = Display.s_input("Encode plain text or data from file [T/F] > ")

        os.system("cls")

        if torf.lower() == "t":
            put = Display.s_input("Text > ")
            break

        elif torf.lower() == "f":
            input_file = Display.s_input("File Path > ")

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


            break

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

    os.system("cls")

    c = 0
    filename = f"{"".join(file.split(".")[:-1])}.extradata_{c}.png"

    while os.path.exists(filename):
        c += 1
        filename = f"{"".join(file.split(".")[:-1])}.extradata_{c}.png"

    cv2.imwrite(filename, np.array(final).astype(np.uint8).reshape((height, width, channels)))
    print(info(f"Successfully created file '{filename}'."))

if __name__ == "__main__":
    main()