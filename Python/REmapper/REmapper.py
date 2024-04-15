import os
import remap as r

user = os.path.expanduser("~")
remap = []
remap_to = []

try:
    with open(f"{user}\\remap.txt", "x") as f:
        pass
    with open(f"{user}\\remap_to.txt", "x") as f:
        pass
except FileExistsError:
    pass

try:
    with open(f"{user}\\remap.txt", "r") as f:
        remap = f.read().split(",")
        remap = [entry.strip() for entry in remap if entry.strip()]
    with open(f"{user}\\remap_to.txt", "r") as f:
        remap_to = f.read().split(",")
        remap_to = [entry.strip() for entry in remap_to if entry.strip()]
except FileNotFoundError:
    print("Error: The remap.txt or remap_to.txt files do not exist.")
    exit(1)

if len(remap) != len(remap_to):
    print("Error: The number of entries in remap.txt and remap_to.txt must be the same.")
    exit(1)

for i in range(len(remap)):
    r.remapit(remap, remap_to, i)
    
while True:
    pass