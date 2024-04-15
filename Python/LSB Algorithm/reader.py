import cv2
import os

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

    file = Display.s_input("Image Path > ")

    os.system("cls")

    if os.path.exists(file) != True:
        f"\033[38;5;160m[FATAL] File '{file}' not found!\033[0m"
        exit()

    while True:
        save = Display.s_input("Save to file or print out to the console [S/P] > ")

        os.system("cls")

        if save == "s":
            save_spot = Display.s_input("Output Path > ")
            break
        
        if save == "p":
            break

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

    os.system("cls")

    final = remove_until("0",final)

    if save.lower() == "s":
        with open(save_spot,"w") as f:
            f.write(final)

    else:
        print(final)

if __name__ == "__main__":
    main()