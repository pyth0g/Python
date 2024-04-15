import brainfuck
import argparse
import subprocess
import configparser
import os

parser = argparse.ArgumentParser()
parser.add_argument('file', nargs='?', help='File to run (must end in .bf).')
args = parser.parse_args()

help_table = {}

def _writeHelp(command: str, explanation: str, help_pad: int, expl_pad: int, *args) -> str:
    help_table.update({command.upper(): explanation})

    #this is put in the help screen
    return f"{((command.upper() + " " + ("".join([f"<{i.upper()}> " for i in args]) if args else "")).ljust(expl_pad, " ") + explanation).ljust(help_pad, " ")}"

def _cli(memory_block,loops,ptr) -> None:
    config = configparser.ConfigParser()
    config_name = "bf_config.ini"

    cls_on_restart = False

    help_pad: int = 110 #the width of the whole help screen
    expl_pad: int = 14 #the width of the area between the command and it's explanation in the help screen

    line_wrap = 16 #Amount of memory cells per line
    
    show_mem: bool = True
    error: bool = True
    comments: bool = True

    prompt = ">>>" #default prompt
    nl_prompt = "..." #new line prompt
    
    comment_indicator = "#" #the character that has to be at the start of a line for it to count as a comment

    config.read(f'{config_name}') #Get settings from config file if it exists
    if config.sections():
        show_mem = bool(eval(config["DEFAULT"]["show_memory"]))
        error = bool(eval(config["DEFAULT"]["show_errors"]))
        comments = bool(eval(config["DEFAULT"]["comments"]))

        prompt = config["PROMPTS"]["default"]
        nl_prompt = config["PROMPTS"]["new_line"]

        line_wrap = int(config["MEMORY"]["memory_cells"])

        help_pad = int(config["HELP"]["help_screen_width"])

        comment_indicator = config["COMMENTS"]["comment_indicator"]

        cls_on_restart = config["DEFAULT"]["cls_on_restart"]
    
    store: list = []

    syntax: str = fr"""
•{"-"*(help_pad)}•
|{"Explanation of the brainfuck programming language's syntax:".ljust(help_pad)}|
|{" "*help_pad}|
|{_writeHelp(">","Increment the data pointer by one.", help_pad, round(expl_pad/2.5))}|
|{_writeHelp("<", "Decrement the data pointer by one.", help_pad, round(expl_pad/2.5))}|
|{" "*help_pad}|
|{" "*help_pad}|
|{_writeHelp("+", "Increment the byte at the data pointer by one.", help_pad, round(expl_pad/2.5))}|
|{_writeHelp("-", "Decrement the byte at the data pointer by one.", help_pad, round(expl_pad/2.5))}|
|{" "*help_pad}|
|{" "*help_pad}|
|{_writeHelp(".", "Output the byte at the data pointer.", help_pad, round(expl_pad/2.5))}|
|{_writeHelp(",", "Accept one byte of input, storing its value in the byte at the data pointer.", help_pad, round(expl_pad/2.5))}|
|{" "*help_pad}|
|{" "*help_pad}|
|{_writeHelp("[", "If the byte at the data pointer is zero, then instead of moving the instruction pointer", help_pad, round(expl_pad/2.5))}|
|{f"{" "*6}forward to the next command, jump it forward to the command after the matching ] command.".ljust(help_pad)}|
|{" "*help_pad}|
|{_writeHelp("]", "If the byte at the data pointer is nonzero, then instead of moving the instruction", help_pad, round(expl_pad/2.5))}|
|{f"{" "*6}pointer forward to the next command, jump it back to the command after the".ljust(help_pad)}|
|{f"{" "*6}matching [ command.".ljust(help_pad)}|
|{" "*help_pad}|
|{" "*help_pad}|
|{"For more you can visit: en.wikipedia.org/wiki/Brainfuck".ljust(help_pad)}|
•{"-"*(help_pad)}•
"""
    
    help: str = f"""
•{"-"*(help_pad)}•
|{_writeHelp("syn", "Shows an explanation of the brainfuck programming language's syntax.", help_pad, expl_pad)}|
|{_writeHelp("help", "Shows the help screen.", help_pad, expl_pad)}|
|{_writeHelp("?", "Gives an explanation of a command.", help_pad, expl_pad,"!command")}|
|{" "*help_pad}|
|{_writeHelp("restart", "Restarts the brainfuck interpreter.", help_pad, expl_pad)}|
|{_writeHelp("exit", "Quits the brainfuck interpreter.", help_pad, expl_pad)}|
|{" "*help_pad}|
|{_writeHelp("shwm", "Toggles between showing memory cells.", help_pad, expl_pad)}|
|{_writeHelp("err", "Toggles between showing errors.", help_pad, expl_pad)}|
|{_writeHelp("cmt", "Toggles between showing comments. (Type one by adding # to the start of a line.)", help_pad, expl_pad)}|
|{" "*help_pad}|
|{_writeHelp("cls", "Clears the screen.", help_pad, expl_pad)}|
|{_writeHelp("rst", "Resets the memory and pointer.", help_pad, expl_pad)}|
|{_writeHelp("clear", "Resets store.", help_pad, expl_pad)}|
|{" "*help_pad}|
|{_writeHelp("store", "Stores before written bf code (and memory if shwm is on) in specified file.", help_pad, expl_pad,"!file")}|
|{_writeHelp("exec", "Executes code from specified (.bf) file.", help_pad, expl_pad,"!file")}|
|{_writeHelp("config", f"Creates a {config_name} file. (Restart the program after changing settings.)", help_pad, expl_pad, "?.path", "?.open", "?.del")}|
•{"-"*(help_pad)}•

<!arg> - Mandatory argument
<?arg> - Optional argument
<.arg> - Input just the word written in the argument (Eg. COMMAND <.ARG> you would put in ARG) otherwise the thing it is asking for (Eg. COMMAND <FILE> you would put in C:\\text.txt).
"""

    try:
        while True:
            line: str = input(f"{prompt} ")
            if line == "".replace(" ",""):
                #if the line is empty (the user just pressed ENTER) ignore
                continue

            if line.lower().replace(" ","") == "exit":
                #exit the cli
                break

            elif line.lower().replace(" ","") == "clear":
                #clear store
                store = []
                print("Cleared store.")
                continue

            elif line.lower().replace(" ","") == "restart":
                #restart the cli
                if cls_on_restart: os.system("cls")
                main()
                break

            elif line.lower().replace(" ","") == "config":
                config["DEFAULT"] = {"show_memory": show_mem, "show_errors": error, "comments": comments, "cls_on_restart": cls_on_restart}
                config["PROMPTS"] = {"default":prompt, "new_line":nl_prompt}
                config["MEMORY"] = {"memory_cells": line_wrap}
                config["HELP"] = {"help_screen_width": help_pad}
                config["COMMENTS"] = {"comment_indicator": comment_indicator}

                if os.path.exists(f"{config_name}"): 
                    usr = input(f"File {config_name} already exists. Do you wish to replace it? [Y/N] (default Y): ")
                    if usr == "N":
                        #do nothing
                        print("No action was made.")
                        continue

                    else: 
                        #replace (default)
                        os.remove(f"{config_name}")


                with open(f"{config_name}","w") as f: config.write(f)

                print(f"Successfully created file '{config_name}'. After changing settings restart for them to take effect.")
                continue

            elif line.lower().startswith("config "):
                arg = line.replace("config ", "", 1).lower()

                if os.path.exists(f"{os.getcwd()}\\{config_name}") != True:
                    print("Config file does not exist. Create it by running 'config'.")
                    continue

                if arg == "path":
                    print(f"{os.getcwd()}\\{config_name}")

                if arg == "open":
                    subprocess.Popen(f"notepad {os.getcwd()}\\{config_name}")
                    print(f"Opened '{os.getcwd()}\\{config_name}'.")

                if arg == "del":
                    if input(f"Are you sure to delete {config_name} [Y/N] (default Y): ") != "N":
                        os.remove(f"{os.getcwd()}\\{config_name}")
                        print(f"Successfully deleted '{config_name}'.")

                    else:
                        print("No action was made.")
                
                continue

            elif line.lower().replace(" ","") == "shwm":
                #if the command is shwm, then toggle between showing and not showing
                show_mem = True if not show_mem else False
                print("Showing memory cells." if show_mem else "Not showing memory cells.")

            elif line.lower().replace(" ","") == "cls":
                #clear the screen
                os.system("cls")
                continue

            elif line.lower().replace(" ","") == "err":
                #same as shwm just for err
                error = False if error else True
                print("Showing errors." if error else "Not showing errors.")
                continue

            elif line.lower().replace(" ","") == "cmt":
                #same as shwm just for cmt
                comments = False if comments else True
                print("Showing comments." if comments else "Not showing comments.")
                continue

            elif line.lower().startswith("store "):
                #store all CODE and COMMENTS written before in the cli, to a file
                file = line.lower().split("store ")[1] #get the filename
                if file == "":
                    #no file supplied
                    print("Supply argument <file>.")
                    continue

                if os.path.exists(file):
                    #manage existing files
                    usr = input(f"File '{file}' already exists. Do you wish to replace it? [Y/N] (default N): ")
                    if usr == "Y":
                        #user wants to replace
                        os.remove(file)

                    else:
                        #default (do nothing)
                        print("No action was made.")
                        continue

                with open(file,"x") as f:
                    f.write("\n".join([str(i) for i in store if str(i) != ""])) #store code and remove empty lines
                print(f"Successfully created file '{file}'.")
                continue

            elif line.lower().replace(" ","") == "store":
                #no file supplied
                print("Supply argument <file>.")
                continue

            elif line.lower().startswith("exec "):
                file = line.lower().split("exec ")[1] #get the filename

                mem, _, _, _, _ = brainfuck.execute(file) #run code from file

                if show_mem: #show memory
                    print("\n") #separate output and memory
                    _mem = []
                    display = []

                    for i in eval(mem.split("\n")[-2]):
                        if len(_mem) >= line_wrap:
                            display.append(_mem)
                            _mem = []
                        
                        _mem.append(i)

                    if _mem != []: display.append(_mem)

                    for j in display:
                        for i in j:
                            print(f"•{"-"*len(f" {i} ")}•", end = " ") 
                        print("") #new line

                        for i in j:
                            print(f"| {i} |", end = " ") 
                        print("") #new line

                        for i in j:
                            print(f"•{"-"*len(f" {i} ")}•", end = " ") 
                        print("") #new line
                    continue

            elif line.lower().replace(" ","") == "exec":
                #no file supplied
                print("Supply argument <file>.")
                continue

            elif line.lower().replace(" ","") == "rst":
                #reset memory
                memory = ""
                memory_block = [0]

                #reset pointer
                ptr = 0

                #reset store
                store = []

            elif line.lower().startswith("? "):
                command = line.lower().split("? ")[1] #get the command
                
                try:
                    print(f"{command.upper()} - {help_table[command.upper()]}") #get the explanation for the command
                except KeyError:
                    print(f"'{command}' is not recognized as a command.")

                continue

            elif line.lower().replace(" ","") == "?":
                #no command supplied
                print("Supply argument <command>.")
                continue

            elif line.lower().replace(" ","") == "syn":
                print(syntax)
                continue

            elif line.lower().replace(" ","") == "help":
                #display the help screen
                print(help)
                continue
                
            elif line.startswith(comment_indicator):
                #create a comment if they are enabled
                if comments: 
                    print(f"\033[2m{line}\033[0m")
                    #store the comment
                    store.append("".join(filter(lambda x: x not in ['.', ',', '[', ']', '<', '>', '+', '-'], line)))
                continue
                
            else:
                #store the line
                store.append("".join(filter(lambda x: x in ['.', ',', '[', ']', '<', '>', '+', '-'], line)))

            if line.endswith("["):
                #change from >>> to ... when [ is typed and allow multi line loops
                while True:
                    line_part = input(f"{nl_prompt} ")
                    if line_part.replace(" ","") == "": break
                    
                    if line_part.startswith(comment_indicator):
                    #create a comment if they are enabled
                        if comments: 
                            print(f"\033[2m{line}\033[0m")
                            #store the comment
                            store.append("".join(filter(lambda x: x not in ['.', ',', '[', ']', '<', '>', '+', '-'], line)))
                        continue

                    line += line_part
                    #store line - whats not a command
                    store.append("".join(filter(lambda x: x in ['.', ',', '[', ']', '<', '>', '+', '-'], line_part)))

            check = brainfuck._check(line) #Error handling
            if check.startswith("Error"):
                if error: print(check)
                continue
            
            memory,memory_block,output,loops,ptr = brainfuck.evaluate(line,write=False,memory_block=memory_block,ptr=ptr,loops=loops) #run the code
            
            if memory.startswith("Error"):
                if error: print(memory) #Errors
                continue

            memory_block[ptr] = f"^{str(memory_block[ptr]).replace("^","")}" #add ^ to the start of the memory block the pointer is currently at

            print(f"{"".join(output)}") if "".join(output) else "" #print the output of the code

            if show_mem: #show memory
                _mem = []
                display = []

                for i in memory_block:
                    if len(_mem) >= line_wrap:
                        display.append(_mem)
                        _mem = []
                    
                    _mem.append(i)

                store.append(f"o={"="*len(str(_mem)[1:-1].replace(", ", " | "))}=o") #Looks better
                store.append(f"| {str(_mem)[1:-1].replace(", ", " | ")} |") #than just
                store.append(f"o={"="*len(str(_mem)[1:-1].replace(", ", " | "))}=o") #numbers

                if _mem != []: display.append(_mem)

                for j in display:
                    for i in j:
                        print(f"•{"-"*len(f" {i} ")}•", end = " ") 
                    print("") #new line

                    for i in j:
                        print(f"| {i} |", end = " ") 
                    print("") #new line

                    for i in j:
                        print(f"•{"-"*len(f" {i} ")}•", end = " ") 
                    print("") #new line


    except KeyboardInterrupt:
        print("\nKeyboard Interrupt")
        _cli(memory_block,loops,ptr)

def main() -> None:
    #if a file is supplied to args run it else open the cli
    if args.file:
        #check the file extension
        if args.file.endswith(".bf"):
            #check if the file exists
            if os.path.exists(args.file):
                try:
                    brainfuck.execute(args.file) #execute the file
                    input('\n\n[END OF PROGRAM]')
                except KeyboardInterrupt:
                    print("\nKeyboard Interrupt")

            else: print(f"No such file or directory: '{args.file}'")

        else: print("File must end in .bf.")
    
    else:
        #start the cli
        print('BrainFuck Interpreter 1.0.0 by Pyth0g (github.com/pyth0g).\nType "help" for more information.')
        memory_block,loops,ptr = [0],[],0
        _cli(memory_block,loops,ptr)

if __name__ == "__main__":
    main()