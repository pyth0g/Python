PASSWORD = "8338"
c = 0
while True:
    c += 1
    user = input("Password > ")
    if user == PASSWORD:
        print("Access Granted!")
        while True:
            pass
    if c == 3:
        break