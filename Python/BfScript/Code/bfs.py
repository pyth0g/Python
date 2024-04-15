import bfscript
import argparse
import os
from sys import exit

parser = argparse.ArgumentParser()
parser.add_argument('file', nargs='?', help='File to compile (must end in .bfs).')
args = parser.parse_args()

if args.file:
    if args.file.endswith(".bfs"):
        if os.path.exists(args.file):
            file_path = args.file

        else: 
            print(f"No such file or directory: '{args.file}'")
            exit()

    else:
        print("File must end in .bfs.")
        exit()
    
else: 
    print("The syntax of the command is incorrect.")
    exit()

with open(file_path) as f: code = f.read()

try:
    code = bfscript.Compiler.compile(code)

    if str(code).startswith("Error"):
        os.system(f"cmd /k echo {code}")
        exit()

    try:
        with open(f"{args.file[:-4]}.bf","x") as f:
            f.write(str(code))

        print("File created successfully.")
    
    except FileExistsError:
        os.system(f"cmd /k echo File '{args.file[:-4]}.bf' already exists.")

except KeyboardInterrupt:
    print("Keyboard Interrupt")
    exit()