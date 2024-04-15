import sys
import time
import msvcrt

def _cleanup(code: str) -> str:
    #remove all characters that aren't commands
    return ''.join(filter(lambda x: x in ['.', ',', '[', ']', '<', '>', '+', '-'], code))

def execute(file: str, log: bool = False, sleep = 0, formatting = ("^{memory}","{memory}\n"), write: bool = True, memory_block: list = [0], ptr: int = 0, loops: list = []) -> tuple:
    """
    For file put in your file with the brainfuck code in it in a form of a string ending in .bf .\n
    For log put in a bool that if True log is enabled if False log is disabled.\n
    For sleep put in time in seconds to sleep between execution cycles.\n
    For formatting put in tuple of: first how to show the part of the memory block with the pointer on it and second how to display individual memory blocks Eg. ("^{memory}","\\n{memory}\\n") the part were the memory is shown must always be {memory}.
    """

    #check the file extension
    if file.endswith(".bf"):
        with open(file) as f:
            #read the file and run it trough evaluate
            memory,output,output,loops,ptr = evaluate(f.read(),log,sleep,formatting,write,memory_block,ptr,loops)
            return (memory,output,output,loops,ptr)
    else:
        raise OSError("Invalid file type. Expected a .bf file.")

def _log(memory: list,ptr: int,sleep: float, formatting: tuple) -> None:
    memory[ptr] = str(formatting[0]).format(memory = memory[ptr])
    sys.stdout.write(str(formatting[1]).format(memory = str(memory)))
    time.sleep(sleep)

def _check(code: str) -> str:
    #check for errors
    start, end = 0, 0
    error_char = 0
    char = 0
    last = ""
    for i in code:
        if i == "[":
            error_char = char
            start += 1
            last = "["

        elif i == "]":
            if char == 0:
                return f"Error at character {char}: No loop to end."
            
            if last == "]" and start == end:
                return f"Error at character {char}: No loop to end."
            
            error_char = char
            end += 1
            last = "]"

        char += 1
            
    if start != end:
        return f"Error at character {error_char}: Did not end loop statement."
 
    return code

def evaluate(code: str, log: bool = False, sleep = 0, formatting = ("^{memory}","{memory}\n"), write: bool = True, memory_block: list = [0], ptr: int = 0, loops: list = []) -> tuple:
    """
    For code put in your brainfuck code in a form of a string.\n
    For log put in a bool that if True log is enabled if False log is disabled.\n
    For sleep put in time in seconds to sleep between execution cycles.\n
    For formatting put in tuple of: first how to show the part of the memory block with the pointer on it and second how to display individual memory blocks Eg. ("^{memory}","\\n{memory}\\n") the part were the memory is shown must always be {memory}.
    """

    code_ptr = 0
    code = _cleanup(code)
    code = _check(code)
    if code.startswith("Error"): #Error handling
        return (code,[0],[],0,0)
    output = []
    memory = ""

    while code_ptr < len(code):
        memory += str(memory_block) + '\n'
        memory_block = [int(str(i).replace(str(formatting[0]).split("{memory}")[0], "").replace(str(formatting[0]).split("{memory}")[1], "")) for i in memory_block]

        if code[code_ptr] == '>': #if the command is > move right
            if ptr + 1 > len(memory_block) - 1:
                    memory_block.append(0)
            ptr = ptr + 1 if ptr + 2 < 30_000 else ptr
        
        elif code[code_ptr] == '<': #if the command is < move left
            ptr = ptr - 1 if ptr > 0 else ptr
        
        elif code[code_ptr] == "+": #if the command is + add 1
            memory_block[ptr] = memory_block[ptr] + 1 if memory_block[ptr] < 255 else 0 #overflowing

        elif code[code_ptr] == "-": #if the command is - remove 1
            memory_block[ptr] = memory_block[ptr] - 1 if memory_block[ptr] > 0 else 255 #overflowing

        elif code[code_ptr] == '.': #if the command is . print value at pointer
            output.append(chr(memory_block[ptr]))
            if write:
                print(chr(memory_block[ptr]),end="",flush=True)

        elif code[code_ptr] == ',': #if the command is , take user input
            try:
                memory_block[ptr] = ord(msvcrt.getch().decode('utf-8', errors='ignore')) #use msvcrt.getch() to only get 1 character of input
            except IndexError:
                memory_block[ptr] = 13 #idk why but put a new line if there is and index error

        if code[code_ptr] == "[": #if the command is [ start loop
            if memory_block[ptr] == 0:
                nesting_level = 0 #handle nesting
                while code_ptr < len(code):
                    if code[code_ptr] == "[":
                        nesting_level += 1
                    elif code[code_ptr] == "]":
                        nesting_level -= 1
                        if nesting_level == 0:
                            break
                    code_ptr += 1
            
            else:
                loops.append(code_ptr)

        elif code[code_ptr] == "]": #if the command is ] end loop
            if memory_block[ptr] != 0:
                code_ptr = loops.pop() - 1
            else:
                loops.pop()

        code_ptr += 1

        if log: _log(memory_block,ptr,sleep,formatting) #log

    return (memory,memory_block,output,loops,ptr)