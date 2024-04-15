import bfscript

file_path = r"C:\Users\lenar\OneDrive\PYthon\BfScript\test.bfs"

with open(file_path) as f: code = f.read()

compiled = bfscript.Compiler.compile(code)

print(compiled)