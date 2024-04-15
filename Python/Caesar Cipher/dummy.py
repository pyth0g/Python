import caesar_cipher

while True:
    usr = input("E/D - ")
    if usr.lower() == "e":
        print(caesar_cipher.Cipher.encode(input("> "),3))
    elif usr.lower() == "d":
        print(caesar_cipher.Cipher.decode(input("> "),3))
    else:
        print("Invalid")