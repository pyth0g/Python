import winreg
import pyuac
import platform
import os

def main():
    key_name = "cpt"
    program = "custom-protocol.exe"
    value_name = "URL Protocol"
    value_data = ("URL:"+key_name+"Protocol")

    path = winreg.HKEY_CLASSES_ROOT
    key = None  # Initialize the key variable outside the try block

    try:
        # Create the key under HKEY_CLASSES_ROOT
        key = winreg.CreateKey(path, key_name)

        # Set the value within the key
        winreg.SetValueEx(key, value_name, 0, winreg.REG_SZ, "")
        winreg.SetValueEx(key,"",0,winreg.REG_SZ,value_data)
        shell = winreg.CreateKey(key,"shell")
        open = winreg.CreateKey(shell,"open")
        command = winreg.CreateKey(open,"command")
        winreg.SetValueEx(command,"",0,winreg.REG_SZ, program)

        print("Registry key has been created successfully.")

    finally:
        # Always close the key handle after using it
        if key is not None:
            winreg.CloseKey(key)
    input("Press enter to close the window. >")

if __name__ == "__main__":
    if not pyuac.isUserAdmin():
        print("Re-launching as admin!")
        pyuac.runAsAdmin()
    else:        
        main()  # Already an admin here.