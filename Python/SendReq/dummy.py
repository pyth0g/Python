import subprocess
import pyperclip

input("Copy curl command and press enter.")
cmd = pyperclip.paste()

subprocess.call(cmd,shell=True)