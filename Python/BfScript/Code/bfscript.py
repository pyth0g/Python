OPERATORS, PLUS, MINUS, SET, PRINT, PRINTLN, INPUT, ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, LOOP, END, NO_ERRORS, ERROR, EMPTY, COMMANDS, DELETE, MV_FW, MV_BW, BREAK, IF, ELSE, ELIF, CLEAR, LOCATION, PRINTNUM, SET_STR, STR, PRINTSTR = ["*","/","+","-"], "PLUS", "MINUS", "SET", "PRINT", "PRINTLN", "INPUT", "ADDITION", "SUBTRACTION", "MULTIPLICATION", "DIVISION", "LOOP", "END", "NO_ERRORS", "ERROR", "EMPTY", ["+","-","<",">","[","]",".",","],"DELETE", "MV_FW", "MV_BW", "BREAK", "IF", "ELSE", "ELIF", "CLEAR", "LOCATION", "PRINTNUM", "SET_STR", "STR", "PRINTSTR"

class Token(object):
    def __init__(self, type: str, value: str, ptr: int, assoc: str, *ed) -> str:
        self.type = type
        self.value = value
        self.ptr = ptr
        self.assoc = assoc
        self.ed = ed

    def __str__(self) -> str:
        return f"{self.type}:{self.value}:{self.ptr}:{self.assoc}{"".join([f":{i}" for i in self.ed])}"

class Operations:
    def var_lookup(var: str, token_arr: list) -> int:
        token_arr_reverse = token_arr.copy()
        token_arr_reverse.reverse()
        for token in token_arr_reverse:
            if any(token.split(":")[0] == i for i in [SET,INPUT,ADDITION,SUBTRACTION,MULTIPLICATION]):
                if token.split(":")[3] == var:
                    return int(token.split(":")[2])
            
            elif any(token.split(":")[0] == i for i in [SET_STR]):
                if token.split(":")[3] == var:
                    return (int(token.split(":")[2]),int(token.split(":")[4]))
                 
        return str(var)

    def to_ascii(str: str, token_arr: list) -> int:
        if str[0] == '"' and str[-1:] == '"':
            return [ord(i) for i in str[1:-1]]

        token_arr_reverse = token_arr.copy()
        token_arr_reverse.reverse()
        for token in token_arr_reverse:
            if token.split(":")[3] == str:
                return int(token.split(":")[1])
            
        return str
    
    def def_math(text: str) -> list:
        if "*" in text:
            first = text.split("*")[0]
            second = text.split("*")[1]
            
            return (MULTIPLICATION,f'{first}*{second}')
        
        if "/" in text:
            first = text.split("/")[0]
            second = text.split("/")[1]

            return (DIVISION,f'{first}/{second}')
        
        if "+" in text:
            first = text.split("+")[0]
            second = text.split("+")[1]
            
            return (ADDITION,f'{first}+{second}')
    
        if "-" in text:
            first = text.split("-")[0]
            second = text.split("-")[1]
            
            return (SUBTRACTION,f'{first}-{second}')
        
        return text

class Throw(object):
    def __init__(self,error: str,line_num: int, line:str) -> None:
        self.error = error
        self.line_num = line_num
        self.line = line

    def __str__(self) -> str:
        return f"line {self.line_num}:\n   '{self.line}'\nError: {self.error}"

class Parser:
    def check(code: str) -> str:
        code_arr = code.split("\n")
        line_num = 0
        nxt = ""
        all_vars = []
        nx_arr = []
        amount_loops_ifs = 0
        end = 0
        in_if = False
        last = ""

        for line in code_arr:
            line_num += 1
            set_to = ""

            if line == "" or line.startswith("#"):
                continue

            elif line.startswith("print"):
                try:
                    line.split(" ")[1]
                except: 
                    return Throw("Perhaps you forgot a space?",line_num,line)
                
                set_to = line.split(" ")[1].replace(" ","")

                if set_to.isalpha() and set_to[0] != '"':
                    if set_to not in all_vars:
                        return Throw(f"'{set_to}' is not defined.",line_num,line)
                    
            elif line.startswith("printn"):
                try:
                    line.split(" ")[1]
                except: 
                    return Throw("Perhaps you forgot a space?",line_num,line)
                
                set_to = line.split(" ")[1].replace(" ","")

                if set_to.isalpha() and set_to[0] != '"':
                    if set_to not in all_vars:
                        return Throw(f"'{set_to}' is not defined.",line_num,line)
                    
            elif line.startswith("println"):
                try:
                    line.split(" ")[1]
                except: 
                    return Throw("Perhaps you forgot a space?",line_num,line)
                
                set_to = line.split(" ")[1].replace(" ","")

                if set_to.isalpha() and set_to[0] != '"':
                    if set_to not in all_vars:
                        return Throw(f"'{set_to}' is not defined.",line_num,line)
                    
            elif line.startswith("clear"):
                if line != "clear":
                    if line.startswith("clear ") != True:
                        return Throw("Perhaps you forgot a '='?",line_num,line)
                    
                    if line.split("clear ")[1].isalpha() !=  True and line.split("clear ")[1].isdigit() != True:
                        return Throw("Argument for clear must be integer or variable.",line_num,line)
                    
            elif line.startswith("if"):
                if line == "if":
                    return Throw("If takes 1 argument, but 0 were given.",line_num,line)

                if "==" in line or "!=" in line:
                    if '"' in line:
                        return Throw("Argument for if must be integer or variable.",line_num,line)
                    
                else:
                    return Throw("Invalid argument for if.",line_num,line)

                nxt = "end"
                in_if = True
                amount_loops_ifs += 1
                nx_arr.append(IF)

            elif line.startswith("elif"):
                if in_if != True:
                    return Throw("Elif must follow if.",line_num,line)
                
                if line == "elif":
                    return Throw("Elif takes 1 argument, but 0 were given.",line_num,line)

                if "==" in line or "!=" in line:
                    if '"' in line:
                        return Throw("Argument for elif must be integer or variable.",line_num,line)
                    
                else:
                    return Throw("Invalid argument for elif.",line_num,line)

            elif line.startswith("else"):
                if in_if != True:
                    return Throw("Else must follow if.",line_num,line)
                
                if line != "else":
                    return Throw("Else takes no arguments.",line_num,line)
            
            elif line.startswith("movefw"):
                try:
                    line.split(" ")[1]
                except: 
                    return Throw("Perhaps you forgot a space?",line_num,line)

            elif line.startswith("loop"):
                if line == "loop ":
                    return Throw("Loop takes 1 argument, but 0 were given.",line_num,line)

                if line.split("loop ")[1][0] == '"':
                    return Throw("Argument for loop must be integer or variable.",line_num,line)

                nxt = "end"
                last = "loop"
                amount_loops_ifs += 1
                nx_arr.append(LOOP)

            elif line.startswith("mvfw"):
                if line.split("mvfw ")[1].isdigit() and line.split("mvfw ")[1][0] != '"': pass
                else: return Throw("Argument for mvfw must be integer.",line_num,line)

            elif line.startswith("mvbw"):
                if line.split("mvbw ")[1].isdigit() and line.split("mvbw ")[1][0] != '"': pass
                else: return Throw("Argument for mvbw must be integer.",line_num,line)

            elif line.startswith("break"):
                if not line == "break":
                    return Throw("Break does not take arguments.",line_num,line)
                
                if nxt != "end":
                    return Throw("Break can only be used in a loop",line_num,line)
                
            elif line.startswith("end"):
                try:
                    current = nx_arr.pop()
                except IndexError:
                    return Throw("No loop to end.",line_num,line)
                
                if not line == "end":
                    return Throw("End does not take arguments.",line_num,line)
                
                if line == 0:
                    if nxt == "loop":
                        return Throw("Nothing to end.",line_num,line)

                if current == LOOP:
                    if last == "loop" and amount_loops_ifs == end:
                        return Throw("No loop to end.",line_num,line)
                    
                    nxt = "loop"
                    end += 1

                elif current == IF:
                    in_if = False
                    if nxt == "if":
                        return Throw("No if statement to end.",line_num,line)
                    
                    nxt = "if"
                    end += 1

                else:
                    return Throw("Nothing to end",line_num,line)

            elif "=" in line:
                if " " in line.split("=")[0][:-1] and line.startswith("str") != True:
                    return Throw("Invalid syntax.",line_num,line)
                
                c_var = line.replace(" ","").split("=")[0]

                if c_var.isdigit() == True:
                    return Throw("Can only assign to alphabetic values.",line_num,line)

                if line.split("=")[0].startswith("str ") != True:
                    all_vars.append(c_var)

                else:
                    all_vars.append(c_var.replace("str","",1))

                set_to = line.replace(" ","").split("=")[1]

                if set_to[0] == '-':
                    return Throw("Negative integers aren't supported.",line_num,line)
                
                if set_to[0] != '"' and '.' in set_to:
                    return Throw("Floats aren't supported.",line_num,line)
                
                if set_to.startswith("input"):
                    if set_to != "input":
                        return Throw("Input does not take arguments.",line_num,line)
                    
                if set_to.startswith("loc"):
                    if line.split(" ")[1] == "loc":
                        return Throw("Loc takes 1 argument, but 0 were given.",line_num,line)
                
                    if set_to.split("loc")[1].isalpha() != True:
                        return Throw("Argument for loc must be variable.",line_num,line)
                    
                    if (set_to.split("loc")[1] in all_vars) == False:
                        return Throw(f"'{set_to.split("loc")[1]}' is not defined.",line_num,line)
                    
                if line.startswith("str"):
                    if set_to[0] != '"':
                        if set_to not in all_vars:
                            return Throw(f"'{set_to}' is not defined.",line_num,line)
          
                    if set_to.isalpha() != True and set_to[0] != '"':
                        return Throw(f"Can only use variables or strings for 'str'.",line_num,line)
                    


                if set_to.isalpha() and set_to[0] != '"' and set_to != "input" and set_to.startswith("loc") != True and line.startswith("str") != True:
                    if set_to not in all_vars:
                        return Throw(f"'{set_to}' is not defined.",line_num,line)
                    
                if set(set_to).intersection(OPERATORS) and set_to[0] != '"':
                    first = set_to.split(list(set(set_to).intersection(OPERATORS))[0])[0].replace(" ","")
                    second = set_to.split(list(set(set_to).intersection(OPERATORS))[0])[1].replace(" ","")
                    if first.isalpha():
                        if first not in all_vars:
                            return Throw(f"'{first}' is not defined.",line_num,line)

                    if second.isalpha():
                        if second not in all_vars:
                            return Throw(f"'{second}' is not defined.",line_num,line)

            elif "=" not in line:
                return Throw("Perhaps you forgot an '='?",line_num,line)
        
        if amount_loops_ifs != end:
            reversed_code_arr = code_arr.copy()
            reversed_code_arr.reverse()
            for i in reversed_code_arr:
                if i.startswith("loop"):
                    loop_line = line_num
                    break
                if i.startswith("if"):
                    loop_line = line_num
                    break

                line_num -= 1

            return Throw("Did not end loop or if statement.",loop_line,line)

        return NO_ERRORS

    @classmethod
    def parser(self,code: str) -> str:
        check = str(Parser.check(code))
        if check == NO_ERRORS: self.code = code
        else: return [ERROR,check]
        self.code_arr = self.code.split("\n")
        self.token_arr = []
        self.ptr = 0
        self.doprint = False
        self.content = ""
        if_eq, if_not = None, None

        for line in self.code_arr:
            if line == "" or line.startswith("#"):
                continue

            ascii = "0"

            for char in line:
                if "=" in char and "if" not in line:
                    original_line = line.split("=")
                    line = line.replace(" ","").split("=")
                    set = line[0]
                    other = False

                    if type(line[1]) == type(0):
                        ascii = line[1]

                    elif any(ele in line[1] for ele in OPERATORS) and line[1][0] != '"':
                        set_ptr = Operations.var_lookup(set,self.token_arr)
                        if set_ptr == set:
                            set_ptr = self.ptr
                        
                        _type,_value = Operations.def_math(line[1])
                        self.token_arr.append(str(Token(_type,_value,set_ptr,set)))
                        self.ptr += 1
                        self.token_arr.append(str(Token(EMPTY,None,self.ptr,None)))
                        other = True

                    elif line[1].replace(" ","") == "input":
                        self.token_arr.append(str(Token(INPUT,None,self.ptr,set)))
                        continue

                    elif original_line[1].replace(" ","",1).startswith("loc "):
                        self.token_arr.append(str(Token(LOCATION,original_line[1].replace(" ","",1).split("loc ")[1],self.ptr,set)))
                        continue

                    elif line[0].startswith("str"):
                        print(self.ptr)
                        if '"+"' in line[1]:
                            self.token_arr.append(str(Token(SET_STR,"".join(line[1].split('"+"')),self.ptr,set.replace("str","",1),self.ptr+len("".join(line[1][1:-1].split('"+"'))))))
                            self.ptr += len("".join(line[1][1:-1].split('"+"')))

                        elif '+' in line[1] and line[1][0] != '"' and line[1][-1] != '"':
                            if line[1].split("+")[0][0] != '"' and line[1][1][0] != '"':
                                #both are vars
                                ...

                            elif line[1].split("+")[0][0] == '"' and line[1][1][0] != '"':
                                #first string, second var
                                ...

                            elif line[1].split("+")[0][0] != '"' and line[1][1][0] == '"':
                                #first var, second string
                                ...

                        elif line[1].isalpha():
                            self.token_arr.append(str(Token(SET_STR,Operations.var_lookup(line[1],self.token_arr),self.ptr,set.replace("str","",1))))

                        else:
                            self.token_arr.append(str(Token(SET_STR,line[1],self.ptr,set.replace("str","",1),self.ptr+len(line[1][1:-1]))))
                            self.ptr += len(line[1][1:-1])
                        continue

                    else:
                        ascii = Operations.to_ascii(line[1],self.token_arr)

                    if not other:
                        if type(ascii) != type([]):
                            ascii = str(ascii)

                            if ascii[0] == '"' and ascii[-1:] == '"':
                                self.token_arr.append(str(Token(SET,[ord(i) for i in str(ascii)[1:-1]],self.ptr,set)))

                            elif ascii.isdigit():
                                self.token_arr.append(str(Token(SET,ascii,self.ptr,set)))

                            elif ascii.isalpha():
                                self.token_arr.append(str(Token(SET,Operations.to_ascii(ascii,self.token_arr),self.ptr,set)))
                        
                        else:
                            ascii_arr = ascii
                            ascii = 0
                            for i in ascii_arr:
                                ascii += i

                            if str(ascii).isdigit():
                                self.token_arr.append(str(Token(SET,str(ascii),self.ptr,set)))

                            elif str(ascii).isalpha():
                                self.token_arr.append(str(Token(SET,Operations.to_ascii(str(ascii),self.token_arr),self.ptr,set)))

                    else: other = False

            if "".join(line).startswith("print "):
                if line.replace(" ","").split("print")[1][0] == '"' and line.replace(" ","").split("print")[1][-1:] == '"':
                    self.token_arr.append(str(Token(PRINT,str(line.split("print")[1]),self.ptr,None)))
                    self.ptr += 1

                elif line.replace(" ","").split("print")[1].isalpha():
                    if isinstance(Operations.var_lookup(line.replace(" ","").split("print")[1],self.token_arr),tuple):
                        self.token_arr.append(str(Token(PRINTSTR,Operations.var_lookup(line.replace(" ","").split("print")[1],self.token_arr),self.ptr,line.replace(" ","").split("print")[1])))
                        self.ptr += 1

                    else:
                        self.token_arr.append(str(Token(PRINT,int(Operations.var_lookup(line.replace(" ","").split("print")[1],self.token_arr)),self.ptr,line.replace(" ","").split("print")[1])))
                        self.ptr += 1

            if "".join(line).startswith("printn "):
                if line.replace(" ","").split("printn")[1][0] == '"' and line.replace(" ","").split("printn")[1][-1:] == '"':
                    self.token_arr.append(str(Token(PRINTNUM,str(line.split("printn")[1]),self.ptr,None)))
                    self.ptr += 11

                elif line.replace(" ","").split("printn")[1].isalpha():
                    self.token_arr.append(str(Token(PRINTNUM,int(Operations.var_lookup(line.replace(" ","").split("printn")[1],self.token_arr)),self.ptr,line.replace(" ","").split("printn")[1])))
                    self.ptr += 11

            if "".join(line).startswith("clear "):
                if "".join(line).split("clear ")[1].isdigit():
                    self.token_arr.append(str(Token(CLEAR,"".join(line).split("clear ")[1],self.ptr,None)))

                if "".join(line).split("clear ")[1].isalpha():
                    self.token_arr.append(str(Token(CLEAR,Operations.var_lookup("".join(line).split("clear ")[1],self.token_arr),self.ptr,None)))

            elif "".join(line).startswith("clear"):
                self.token_arr.append(str(Token(CLEAR,self.ptr,self.ptr,None)))

            if "".join(line).startswith("if "):
                self.ptr += 1
                if "==" in "".join(line):
                    if_eq = ("".join(line).split(" == ")[0].replace("if ","",1),"".join(line).split(" == ")[1])
                    self.token_arr.append(str(Token(IF,"==",self.ptr,("".join(line).split(" == ")[0].replace("if ","",1),"".join(line).split(" == ")[1]))))

                elif "!=" in "".join(line):
                    if_not = ("".join(line).split(" != ")[0].replace("if ","",1),"".join(line).split(" != ")[1])
                    self.token_arr.append(str(Token(IF,"!=",self.ptr,("".join(line).split(" != ")[0].replace("if ","",1),"".join(line).split(" != ")[1]))))

            if "".join(line).startswith("elif "):
                self.ptr += 1
                if "==" in "".join(line):
                    if_eq = ("".join(line).split(" == ")[0].replace("elif ","",1),"".join(line).split(" == ")[1])
                    self.token_arr.append(str(Token(ELIF,"==",self.ptr,("".join(line).split(" == ")[0].replace("elif ","",1),"".join(line).split(" == ")[1]))))

                elif "!=" in "".join(line):
                    if_not = ("".join(line).split(" != ")[0].replace("elif ","",1),"".join(line).split(" != ")[1])
                    self.token_arr.append(str(Token(ELIF,"!=",self.ptr,("".join(line).split(" != ")[0].replace("elif ","",1),"".join(line).split(" != ")[1]))))

            if "".join(line).startswith("else"):
                self.ptr += 1
                if if_eq:
                    self.token_arr.append(str(Token(ELSE,"!=",self.ptr,if_eq)))
                    if_eq = None
                
                elif if_not:
                    self.token_arr.append(str(Token(ELSE,"==",self.ptr,if_not)))
                    if_not = None

            if "".join(line).startswith("println "):
                if line.replace(" ","").split("println")[1][0] == '"' and line.replace(" ","").split("println")[1][-1:] == '"':
                    self.token_arr.append(str(Token(PRINTLN,str(line.split("println")[1]),self.ptr,None)))
                    self.ptr += 1

                elif line.replace(" ","").split("println")[1].isalpha():
                    self.token_arr.append(str(Token(PRINTLN,int(Operations.var_lookup(line.replace(" ","").split("println")[1],self.token_arr)),self.ptr,line.replace(" ","").split("println")[1])))
                    self.ptr += 1

            if "".join(line).startswith("break"):
                self.token_arr.append(str(Token(BREAK,None,self.ptr,None)))

            if "".join(line).startswith("mvfw "):
                self.token_arr.append(str(Token(MV_FW,int("".join(line).split("mvfw ")[1]),self.ptr,None)))

            if "".join(line).startswith("mvbw "):
                self.token_arr.append(str(Token(MV_BW,int("".join(line).split("mvbw ")[1]),self.ptr,None)))

            if "".join(line).startswith("loop inf"):
                self.token_arr.append(str(Token(LOOP,"inf",self.ptr,None)))

            elif "".join(line).startswith("loop "):
                self.token_arr.append(str(Token(LOOP,int("".join(line).split("loop ")[1]),self.ptr,None)))

            if "".join(line).startswith("end"):
                self.token_arr.append(str(Token(END,None,self.ptr,None)))

            self.ptr += 1
        
        return self.token_arr
    
class Compiler:
    @classmethod
    def write(self,code: str):
        self.bf_code += str(code) + "\n>\n"
        self.ptr += 1

    @classmethod
    def add(self,code: str):
        self.bf_code += str(code)

    @classmethod
    def compile(self,code: str) -> str:
        if code == "" or code == None:
            return str(Throw("Empty file!",0,""))
        self.bf_code = ""
        self.latest_input = ()
        self.parsed = Parser.parser(code)
        if self.parsed[0] == ERROR: return self.parsed[1]
        self.ptr = 0
        loop_start = []
        loop_value = []
        end_instructions = []
        strings = []
        for instruction in self.parsed:
            instruction = instruction.split(":")
            name = instruction[0]
            value = instruction[1]
            ptr_pos = int(instruction[2])
            var = instruction[3]

            if name == BREAK:
                Compiler.write(f"break {"<"*(self.ptr - loop_start[-1])}{"-"*(loop_value[-1] - 1)}{">"*(self.ptr - loop_start[-1])}")

            if name == LOOP:
                end_instructions.append(LOOP)
                if value != "inf":
                    loop_start.append(self.ptr)
                    loop_value.append(int(value))
                    Compiler.write(f"loop {value} {"+"*int(value)}[-")
                
                else:
                    loop_start.append(self.ptr)
                    loop_value.append(2)
                    Compiler.write("loop inf +[")

            if name == END:
                current_instruction = end_instructions.pop()
                if current_instruction == LOOP:
                    loop_value.pop()
                    Compiler.write(f"end {"<"*(self.ptr-loop_start.pop())}]")
                
                elif current_instruction == IF:
                    Compiler.write("end >]<<[-]>> >")

            if name == SET:
                Compiler.write(f"{var} = {chr(int(value)).replace('.', "").replace(',', "").replace('[', "").replace(']', "").replace('<', "").replace('>', "").replace('+', "").replace('-', "")}({value}) [-]{'+' * int(value)}")
                strings.append((value,var,ptr_pos,ptr_pos))

            if name == SET_STR:
                if value.isnumeric():
                    for i in strings:
                        if int(i[2]) == int(value):
                            Compiler.write(f"str {var} = {value} " + "".join([f" {"<"*(self.ptr - int(i[2]) - 1)}[-{">"*(self.ptr - int(i[2]) - 1)}+>+<{"<"*(self.ptr - int(i[2]) - 1)}]{">"*(self.ptr - int(i[2]) - 1)}>[-<{"<"*(self.ptr - int(i[2]) - 1)}+>{">"*(self.ptr - int(i[2]) - 1)}]" for j in range(int(i[3]) - int(i[2]))]) + "<")
                            strings.append((i[0],var,ptr_pos,ptr_pos))
                else:
                    Compiler.write(f"str {var} = {value.replace('.', "").replace(',', "").replace('[', "").replace(']', "").replace('<', "").replace('>', "").replace('+', "").replace('-', "")} " + " ".join(list((f"[-]{'+' * ord(i)} >" for i in value[1:-1]))) + "<")
                    self.ptr += len(value[1:-1])
                    strings.append((value,var,ptr_pos,instruction[4]))

            if name == CLEAR:
                _move = "<"*(self.ptr - int(value)) if (self.ptr - int(value)) > 0 else ">"*(int(value) - self.ptr)
                _movebw = ">"*(self.ptr - int(value)) if (self.ptr - int(value)) > 0 else "<"*(int(value) - self.ptr)

                Compiler.write(f"clear {value} {_move}[-]{_movebw}")

            if name == IF:
                end_instructions.append(IF)
                f_raw = str(eval(var)[0])
                s_raw = str(eval(var)[1])
                first = Operations.var_lookup(eval(var)[0],self.parsed)
                second = Operations.var_lookup(eval(var)[1],self.parsed)

                def iszero():
                    self.ptr += 1
                    return f">+<[>-]>[- <<[-]>>"
                
                def notzero():
                    self.ptr += 1
                    return "[ [-]"

                if value == "==":
                    first_ptr = int(second)
                    second_ptr = int(first)

                    if f_raw.isdigit() and s_raw.isdigit():
                        Compiler.write(f"if {f_raw} == {s_raw} {"+"*first_ptr}{"-"*second_ptr}{iszero()}")
                    
                    elif f_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"if {f_raw} == {s_raw} {"<"*(self.ptr - first_ptr)}[-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)}[-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"-"*second_ptr}{iszero()}")

                    elif s_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"if {f_raw} == {s_raw} {"<"*(self.ptr - second_ptr)}[-{">"*(self.ptr - second_ptr - 1)}+>+{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)}[-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}] > {"-"*first_ptr}{iszero()}")

                    else:
                        Compiler.write("")
                        Compiler.write(f"if {f_raw} == {s_raw} {"<"*(self.ptr - first_ptr)} [-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)} [-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"<"*(self.ptr - second_ptr)} [-{">"*(self.ptr - second_ptr - 1)}+>-{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)} [-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}]>{iszero()}")

                if value == "!=":
                    first_ptr = int(second)
                    second_ptr = int(first)

                    if f_raw.isdigit() and s_raw.isdigit():
                        Compiler.write(f"if {f_raw} != {s_raw} {"+"*first_ptr}{"-"*second_ptr}{notzero()}")
                    
                    elif f_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"if {f_raw} != {s_raw} {"<"*(self.ptr - first_ptr)}[-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)}[-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"-"*second_ptr}{notzero()}")

                    elif s_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"if {f_raw} != {s_raw} {"<"*(self.ptr - second_ptr)}[-{">"*(self.ptr - second_ptr - 1)}+>+{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)}[-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}] > {"-"*first_ptr}{notzero()}")

                    else:
                        Compiler.write("")
                        Compiler.write(f"if {f_raw} != {s_raw} {"<"*(self.ptr - first_ptr)} [-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)} [-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"<"*(self.ptr - second_ptr)} [-{">"*(self.ptr - second_ptr - 1)}+>-{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)} [-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}]>{notzero()}")

            if name == ELSE:
                f_raw = str(eval(var)[0])
                s_raw = str(eval(var)[1])
                first = Operations.var_lookup(eval(var)[0],self.parsed)
                second = Operations.var_lookup(eval(var)[1],self.parsed)

                def iszero():
                    self.ptr += 1
                    return f">+<[>-]>[- <<[-]>>"
                
                def notzero():
                    self.ptr += 1
                    return "[ [-]"

                if value == "==":
                    first_ptr = int(second)
                    second_ptr = int(first)

                    if f_raw.isdigit() and s_raw.isdigit():
                        Compiler.write(f"<>]\nelse {f_raw} == {s_raw} {"+"*first_ptr}{"-"*second_ptr}{iszero()}")
                    
                    elif f_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"<>]\nelse {f_raw} == {s_raw} {"<"*(self.ptr - first_ptr)}[-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)}[-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"-"*second_ptr}{iszero()}")

                    elif s_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"<>]\nelse {f_raw} == {s_raw} {"<"*(self.ptr - second_ptr)}[-{">"*(self.ptr - second_ptr - 1)}+>+{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)}[-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}] > {"-"*first_ptr}{iszero()}")

                    else:
                        Compiler.write("")
                        Compiler.write(f"<>]\nelse {f_raw} == {s_raw} {"<"*(self.ptr - first_ptr)} [-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)} [-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"<"*(self.ptr - second_ptr)} [-{">"*(self.ptr - second_ptr - 1)}+>-{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)} [-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}]>{iszero()}")

                if value == "!=":
                    first_ptr = int(second)
                    second_ptr = int(first)

                    if f_raw.isdigit() and s_raw.isdigit():
                        Compiler.write(f"<>]<<[-]>>\nelse {f_raw} != {s_raw} {"+"*first_ptr}{"-"*second_ptr}{notzero()}")
                    
                    elif f_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"<>]<<[-]>>\nelse {f_raw} != {s_raw} {"<"*(self.ptr - first_ptr)}[-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)}[-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"-"*second_ptr}{notzero()}")

                    elif s_raw.isdigit():
                        Compiler.write("")
                        Compiler.write(f"<>]<<[-]>>\nelse {f_raw} != {s_raw} {"<"*(self.ptr - second_ptr)}[-{">"*(self.ptr - second_ptr - 1)}+>+{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)}[-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}] > {"-"*first_ptr}{notzero()}")

                    else:
                        Compiler.write("")
                        Compiler.write(f"<>]<<[-]>>\nelse {f_raw} != {s_raw} {"<"*(self.ptr - first_ptr)} [-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)} [-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"<"*(self.ptr - second_ptr)} [-{">"*(self.ptr - second_ptr - 1)}+>-{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)} [-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}]>{notzero()}")

            def as_num():
                return " >>++++++++++<<[->+>-[>+>>]>[+[-<+>]>+>>]<<<<<<]>>[-]>>>++++++++++<[->-[>+>>]>[+[-<+>]>+>>]<<<<<]>[-]>>[>++++++[-<++++++++>]<.<<+>+>[-]]<[<[->-<]++++++[->++++++++<]>.[-]]<<++++++[-<++++++++>]<.[-]<<[-<+>]< "

            if name == PRINT:
                if value.isdigit():
                    Compiler.add(f"print {var} {"<"*((self.ptr) - int(value))}.{">"*((self.ptr) - int(value))}\n")

                elif value.replace(" ","") == r'"\n"':
                    Compiler.add(f"{"+"*13}.{"-"*13}\n")
                
                else:
                    value = value[2:][:-1]
                    for value in value.split(r"\n"):
                        for char in value:
                            Compiler.add(f"print {char if char not in COMMANDS else ""}({ord(char)}) {"+"*ord(char)}.[-]\n")

            if name == PRINTSTR:
                print(strings)
                value = eval(value)
                Compiler.add(f"print {var} {"<"*((self.ptr) - int(value[0]))}.{">"*((self.ptr) - int(value[0]) - 2)}\n")
                print(instruction)

            if name == PRINTNUM:
                if value.isdigit():
                    Compiler.add(f"print {var} {"<"*((self.ptr) - int(value))}[-{">"*((self.ptr) - int(value))}+>+{"<"*((self.ptr) - int(value) + 1)}]{">"*((self.ptr) - int(value) + 1)}[-{"<"*((self.ptr) - int(value) + 1)}+{">"*((self.ptr) - int(value) + 1)}]<{as_num()}[-]{">"*11}{"<"*11}\n")

                else:
                    value = value[2:][:-1]
                    for value in value.split(r"\n"):
                        for char in value:
                            Compiler.add(f"print {char if char not in COMMANDS else ""}({ord(char)}) {"+"*ord(char)} {as_num()}[-]{">"*11}{"<"*11}\n")

            if name == PRINTLN:
                if value.isdigit():
                    Compiler.add(f"println {var} {"<"*((self.ptr) - int(value))}.{">"*((self.ptr) - int(value))}\n")
                    Compiler.add(f"{"+"*13}.{"-"*13}\n")

                elif value == '"\n"':
                    Compiler.add(f"{"+"*13}.{"-"*13}\n")

                else:
                    value = value[2:][:-1]
                    for value in value.split(r"\n"):
                        for char in value:
                            Compiler.add(f"println {char if char not in COMMANDS else ""}({ord(char)}) {"+"*ord(char)}.[-]\n")
                        Compiler.add(f"{"+"*13}.{"-"*13}\n")

            if name == LOCATION:
                Compiler.write(f"{var} = {value}({LOCATION}) {"+"*int(Operations.var_lookup(value,self.parsed))}")

            if name == INPUT:
                Compiler.write(f"{var} = ({INPUT})[-],")
                self.latest_input = (ptr_pos,var)
                strings.append((value,var,ptr_pos,ptr_pos))

            if name == MV_FW:
                Compiler.write(">"*int(value))

            if name == MV_BW:
                Compiler.write("<"*int(value))

            def search(array: list,item: str):
                c = 0
                for i in array:
                    if i.split(":")[2] == item:
                        return c
                    c += 1

            if name == ADDITION:
                operator = "+"
                first = str(value.split(operator)[0])
                second = str(value.split(operator)[1])

                if first.isalpha():
                    second_ptr = Operations.var_lookup(first,self.parsed)
                    first = int(self.parsed[search(self.parsed,str(second_ptr))].split(":")[1]) if self.parsed[search(self.parsed,str(second_ptr))].split(":")[1] != 'None' else INPUT
                
                if second.isalpha():
                    first_ptr = Operations.var_lookup(second,self.parsed)
                    second = int(self.parsed[search(self.parsed,str(first_ptr))].split(":")[1]) if self.parsed[search(self.parsed,str(first_ptr))].split(":")[1] != 'None' else INPUT

                Compiler.write("")
                Compiler.write(f"{var} = {chr(first) if first != INPUT else ""}({first}) {operator} {chr(second) if second != INPUT else ""}({second}) -{"<"*(self.ptr - first_ptr)} [-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)} [-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"<"*(self.ptr - second_ptr)} [-{">"*(self.ptr - second_ptr - 1)}+>+{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)} [-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}]> {"<"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}[-]{">"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))} [-{"<"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}+{">"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}]")

            if name == SUBTRACTION:
                operator = "-"
                first = str(value.split(operator)[0])
                second = str(value.split(operator)[1])

                if first.isalpha():
                    second_ptr = Operations.var_lookup(first,self.parsed)
                    first = int(self.parsed[search(self.parsed,str(second_ptr))].split(":")[1]) if self.parsed[search(self.parsed,str(second_ptr))].split(":")[1] != 'None' else INPUT
                
                if second.isalpha():
                    first_ptr = Operations.var_lookup(second,self.parsed)
                    second = int(self.parsed[search(self.parsed,str(first_ptr))].split(":")[1]) if self.parsed[search(self.parsed,str(first_ptr))].split(":")[1] != 'None' else INPUT

                Compiler.write("")
                Compiler.write(f"{var} = {chr(first) if first != INPUT else ""}({first}) {operator} {chr(second) if second != INPUT else ""}({second}) +{"<"*(self.ptr - first_ptr)} [-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)} [-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > {"<"*(self.ptr - second_ptr)} [-{">"*(self.ptr - second_ptr - 1)}+>-{"<"*(self.ptr - second_ptr)}]{">"*(self.ptr - second_ptr - 1)} [-{"<"*(self.ptr - second_ptr - 1)}+{">"*(self.ptr - second_ptr - 1)}]> {"<"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}[-]{">"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))} [-{"<"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}+{">"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}]")

            if name == MULTIPLICATION:
                operator = "*"
                first = str(value.split(operator)[0])
                second = str(value.split(operator)[1])

                if first.isalpha():
                    second_ptr = Operations.var_lookup(first,self.parsed)
                    first = int(self.parsed[search(self.parsed,str(second_ptr))].split(":")[1]) if self.parsed[search(self.parsed,str(second_ptr))].split(":")[1] != 'None' else INPUT
                
                if second.isalpha():
                    first_ptr = Operations.var_lookup(second,self.parsed)
                    second = int(self.parsed[search(self.parsed,str(first_ptr))].split(":")[1]) if self.parsed[search(self.parsed,str(first_ptr))].split(":")[1] != 'None' else INPUT

                Compiler.write("")
                Compiler.write("")
                Compiler.write(f"{var} = {chr(first) if first != INPUT else ""}({first}) {operator} {chr(second) if second != INPUT else ""}({second}) {"<"*(self.ptr - first_ptr)} [-{">"*(self.ptr - first_ptr - 1)}+>+{"<"*(self.ptr - first_ptr)}]{">"*(self.ptr - first_ptr - 1)} [-{"<"*(self.ptr - first_ptr - 1)}+{">"*(self.ptr - first_ptr - 1)}] > [-{"<"*(self.ptr - second_ptr)} [-{">"*(self.ptr - second_ptr - 1)}+<+{"<"*(self.ptr - second_ptr - 2)}] {">"*(self.ptr - second_ptr - 2)} [-{"<"*(self.ptr - second_ptr - 2)}+{">"*(self.ptr - second_ptr - 2)}] >>] < [->+<] > {"<"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}[-]{">"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))} [-{"<"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}+{">"*(self.ptr - int(Operations.var_lookup(var,self.parsed)))}]")

        if self.bf_code[-3:] == "\n>\n":
            return self.bf_code[:-3]
        return self.bf_code[:-1]