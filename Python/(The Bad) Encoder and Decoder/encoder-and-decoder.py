import base64
import os
import os.path

txt_create = True
code_create = True
path = "./Output"

while txt_create:
    if os.path.exists("./Txt") == False:
        os.mkdir("./Txt")
        txt_create = False
    else:
        txt_create = False 
        pass

while code_create:
    if os.path.exists("./Code") == False:
        os.mkdir("./Code")
        try:
            open("./Code/code.txt","x")
        except FileExistsError:
            pass
        code_create = False
    else:
        code_create = False 
        pass

run = True

def save(decoded_word):
        print("[INFO] Saving...")
        global num
        num = 0
        Error = True
        while Error:
            num = str(num)
            try:os.mkdir(path)

            except FileExistsError:
                pass
            try:
                new_txt(decoded_word=decoded_word)
            except FileExistsError:
                num = int(num)+1
            else:
                Error = False

def new_txt(decoded_word):
    with open(path+"\\"+"output_"+str(num)+".txt", "x") as f:
        f.write(decoded_word)

def repeat_password(password, length):
    password_bytes = password.encode('utf-8')
    repeated_password_bytes = password_bytes * (length // len(password_bytes)) + password_bytes[:length % len(password_bytes)]
    return repeated_password_bytes

def encode_str(password, plain_word):
    repeated_password_bytes = repeat_password(password, len(plain_word))
    plain_word_bytes = plain_word.encode('utf-8')
    encoded_bytes = bytes([a ^ b for a, b in zip(repeated_password_bytes, plain_word_bytes)])
    encoded = base64.b64encode(encoded_bytes).decode('utf-8')
    return encoded

def encode():
    where = input("Read from file (r) or Write (w), r/w: ")
    if where == "r":
        filename = input("Name of the txt file (E.g example.txt would be written as example): ")
        with open(r"./Txt/"+filename+".txt","r") as f:
            plain_word = f.readlines()
            plain_word_str = ''.join(plain_word)
    else:
        plain_word_str = input("[ENCODER] Encode > ")

    password = input("[ENCODER] Password > ")
    output = encode_str(password=password, plain_word=plain_word_str)
    print(f"[ENCODER] Encoded > {output}")

def decode(password, encoded):
    try:
        decoded_bytes = base64.b64decode(encoded.encode('utf-8'))
        repeated_password_bytes = repeat_password(password, len(decoded_bytes))
        decoded = ''.join(chr(a ^ b) for a, b in zip(repeated_password_bytes, decoded_bytes))
        return decoded
    except base64.binascii.Error:
        print("[DECODER] > Invalid input. Please enter a valid encoded value.")
        return None

def decode_input():
    read_from = input("Read from file (r) or continue, r/ENTER: ")
    if read_from == "r":
        with open("./Code/code.txt","r") as f:
            encoded = f.readlines()
            encoded = str(encoded)
            encoded = encoded.replace(r"\n","")
    else:
        encoded = input("[DECODER] Encoded > ")
    password = input("[DECODER] Password > ")
    
    decoded_word = decode(password=password, encoded=encoded)

    if decoded_word:
        where = input("Print out the message (p) or Save to a txt file (s), p/s: ")
        if where == "s":
            save(decoded_word=decoded_word)
            print("Succesfully created the file")
        else:
            print(f"[DECODER] Decoded > {decoded_word}")

while run:
    do = input("Encode (e) or Decode (d), e/d: ")

    if do == "e":
        encode()
    elif do == "d":
        decode_input()
    else:
        print("[INFO] > Invalid input.")