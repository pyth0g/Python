import combinations,keyboard,sys

LETTERS = "qwertzuiopasdfghjklyxcvbnm"
NUMBERS = "1234567890"
SYMBOLS = """,.-!"#$%&/()=?*;:'"""
MIXED = """1234567890qwertzuiopasdfghjklyxcvbnm,.-!"#$%&/()=?*;:'"""

def run(len,limit=1,symbols=False,start=0,enter=False):
    try:
        int(len)
        lenght = len
    except:
        sys.exit(1,"Input a number")

    if not symbols:
        symbols = """1234567890qwertzuiopasdfghjklyxcvbnm,.-!"#$%&/()=?*;:'"""

    c = 0
    s = 0
    active = False
    for combination in combinations.generate(symbols,int(lenght)):
        s += 1
        if s == start:
            active = True
        if active:
            c += 1
            if not enter:
                keyboard.write(combination)
            elif enter:
                keyboard.write(combination + "\n")
            else:
                keyboard.write(combination)
            if limit:
                if c >= limit:
                    break