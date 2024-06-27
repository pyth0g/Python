<<<<<<< HEAD
import duckyscript as ds
import sys
import os
import subprocess
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('-o', '--output', help='Output file name.')
parser.add_argument('-c', '--cpp_compiler', help="c++ compiler to be used if output ends in '.exe' (defaults to gcc, supports any with structure: 'compiler -o file.exe file.cpp').", nargs="?", const="gcc")
parser.add_argument('file', help='File with duckyscript code.')
args = parser.parse_args()

try:
    with open(args.file) as f:
        code = f.read()

except FileNotFoundError:
    print(f"File '{args.file}' not found!")
    sys.exit()

if not os.path.exists("./output"):
    os.mkdir("output")

if os.path.exists(f"./output/{args.output[:-4]}"):
    print(f"File './output/{args.output}' already exits!")
    sys.exit()

if args.output.endswith(".exe"):
    if os.path.exists(f"./output/{args.output[:-4]}.cpp"):
        print(f"File './output/{args.output[:-4]}.cpp' already exits!")
        sys.exit()

if not args.cpp_compiler:
    args.cpp_compiler = "gcc"

if args.output.endswith(".exe"):
    ds.Compiler.compile(code, f"./output/{args.output[:-4]}.cpp")
    subprocess.call(f"{args.cpp_compiler} -o ./output/{args.output} ./output/{args.output[:-4] + ".cpp"}")

else:
=======
import duckyscript as ds
import sys
import os
import subprocess
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('-o', '--output', help='Output file name.')
parser.add_argument('-c', '--cpp_compiler', help="c++ compiler to be used if output ends in '.exe' (defaults to gcc, supports any with structure: 'compiler -o file.exe file.cpp').", nargs="?", const="gcc")
parser.add_argument('file', help='File with duckyscript code.')
args = parser.parse_args()

try:
    with open(args.file) as f:
        code = f.read()

except FileNotFoundError:
    print(f"File '{args.file}' not found!")
    sys.exit()

if not os.path.exists("./output"):
    os.mkdir("output")

if os.path.exists(f"./output/{args.output[:-4]}"):
    print(f"File './output/{args.output}' already exits!")
    sys.exit()

if args.output.endswith(".exe"):
    if os.path.exists(f"./output/{args.output[:-4]}.cpp"):
        print(f"File './output/{args.output[:-4]}.cpp' already exits!")
        sys.exit()

if not args.cpp_compiler:
    args.cpp_compiler = "gcc"

if args.output.endswith(".exe"):
    ds.Compiler.compile(code, f"./output/{args.output[:-4]}.cpp")
    subprocess.call(f"{args.cpp_compiler} -o ./output/{args.output} ./output/{args.output[:-4] + ".cpp"}")

else:
>>>>>>> 357ee29c635c1a5203fd5eab1c01ce31669483b8
    ds.Compiler.compile(code, args.output)