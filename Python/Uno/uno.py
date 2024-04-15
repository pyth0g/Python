from random import randrange
from time import sleep
from keyboard import is_pressed
from os import system
from collections import Counter

class color:
   PURPLE = '\033[38;5;135m'
   CYAN = '\033[38;5;81m'
   DARKCYAN = '\033[38;5;38m'
   BLUE = '\033[38;5;33m'
   GREEN = '\033[38;5;118m'
   YELLOW = '\033[38;5;226m'
   RED = '\033[38;5;196m'
   WHITE = '\033[37m'
   BOLD = '\033[1m'
   UNDERLINE = '\033[4m'
   END = '\033[0m'

def clear_screen():
    system("cls")

def proc_card(card: list):
    corners = ["╭","╮","╰","╯"]
    lines = ["┃","━"]
    c = card[0]
    i = card[1]
    final = []
    
    final.append(f"{c}{corners[0]}{lines[1]}{f"{lines[1]}"*len(f" {i} ")}{lines[1]}{corners[1]}{color.END}")

    final.append(f"{c}{lines[0]}  {" "*len(i)}  {lines[0]}{color.END}")

    final.append(f"{c}{lines[0]}  {color.BOLD}{i}{color.END}{c}  {lines[0]}{color.END}")

    final.append(f"{c}{lines[0]}  {" "*len(i)}  {lines[0]}{color.END}")

    final.append(f"{c}{corners[2]}{lines[1]}{f"{lines[1]}"*len(f" {i} ")}{lines[1]}{corners[3]}{color.END}")

    return final

def flush_input():
    try:
        import msvcrt
        while msvcrt.kbhit():
            msvcrt.getch()
    except ImportError:
        import sys, termios    #for linux/unix
        termios.tcflush(sys.stdin, termios.TCIOFLUSH)

def show(cards: list, hl = None):
    wrap = 12
    sep_cards = []
    temp = []

    corners = ["╭","╮","╰","╯"]
    lines = ["┃","━"]

    for i in cards:
        if len(temp) >= wrap:
            sep_cards.append(temp)
            temp = []
                        
        temp.append(i)

    if temp: sep_cards.append(temp)

    k = 0

    for cards in sep_cards:
        for c,i in cards:
            if i == "BACK":
                print(f"{c}{corners[0]}{lines[1]}{f"{lines[1]}"*3}{lines[1]}{corners[1]}{color.END}", end = " ")
            else: print(f"{c}{corners[0]}{lines[1]}{f"{lines[1]}"*len(f" {i} ")}{lines[1]}{corners[1]}{color.END}", end = " ")
        print("") #new line

        for c,i in cards:
            if i == "BACK":
                print(f"{c}{lines[0]}  U  {lines[0]}{color.END}", end = " ")
            else: print(f"{c}{lines[0]}  {" "*len(i)}  {lines[0]}{color.END}", end = " ")
        print("") #new line

        for c,i in cards:
            if i == "BACK":
                print(f"{c}{lines[0]}  N  {lines[0]}{color.END}", end = " ")
            else: print(f"{c}{lines[0]}  {color.BOLD}{i}{color.END}{c}  {lines[0]}{color.END}", end = " ")
        print("") #new line
        
        for c,i in cards:
            if i == "BACK":
                print(f"{c}{lines[0]}  O  {lines[0]}{color.END}", end = " ")
            else: print(f"{c}{lines[0]}  {" "*len(i)}  {lines[0]}{color.END}", end = " ")
        print("") #new line

        for c,i in cards:
            if i == "BACK":
                print(f"{c}{corners[2]}{lines[1]}{f"{lines[1]}"*3}{lines[1]}{corners[3]}{color.END}", end = " ")
            else: print(f"{c}{corners[2]}{lines[1]}{f"{lines[1]}"*len(f" {i} ")}{lines[1]}{corners[3]}{color.END}", end = " ")
        print("") #new line

        for c,i in cards:
            if k == hl: print(f"{lines[1]*2}{f"{lines[1]}"*len(f" {i} ")}{lines[1]*2}", end = "")
            else: print(" " + " " * len(f"{lines[1]*2}{f"{lines[1]}"*len(f" {i} ")}{lines[1]*2}"), end = "")
            k += 1
        print("") #new line

def new_aval() -> list:
    aval = []
    #all normal just number cards
    for i in range(2):
        for i in range(9):
            aval.append([color.RED, str(i)])

        for i in range(9):
            aval.append([color.YELLOW, str(i)])

        for i in range(9):
            aval.append([color.GREEN, str(i)])

        for i in range(9):
            aval.append([color.BLUE, str(i)])

    #+4
    for i in range(3):
        aval.append([color.PURPLE, "+4"])

    #+5
    aval.append([color.PURPLE, "+5"])

    #+2
    for i in range(6):
        aval.append([color.PURPLE, "+2"])

    #stop
    stop = "X"
    for i in range(2):
        aval.append([color.RED, stop])

        aval.append([color.YELLOW, stop])

        aval.append([color.GREEN, stop])

        aval.append([color.BLUE, stop])

    #change direction
    cd = "↪"
    for i in range(2):
        aval.append([color.RED, cd])

        aval.append([color.YELLOW, cd])

        aval.append([color.GREEN, cd])

        aval.append([color.BLUE, cd])

    #change color
    cc = "֎"
    for i in range(4):
        aval.append([color.PURPLE, cc])

    return aval

def main():
    clear_screen()

    _draw = False
    cards_player = []
    cards_robot = []

    aval = new_aval()

    for i in range(6):
        cards_player.append(aval.pop(randrange(0,len(aval))))

    for i in range(7):
        cards_robot.append(aval.pop(randrange(0,len(aval))))

    cards_player.append(["", "DRAW"])

    sel = 0
    stop = False
    r_draw, p_draw = 0, 0
    _temp = None

    card_player = [[None, None]]
    card_robot = [[None, None]]
    while True:
        current_card = [aval.pop(randrange(0,len(aval)))]
        if current_card[0][0] != color.PURPLE: break

    display_card = current_card

    while len(cards_player) > 1 and len(cards_robot) > 0:
        flush_input()
        card_robot = current_card

        _temp = []

        for i in cards_robot:
            _temp.append([color.WHITE, "BACK"])

        clear_screen()
            
        show(_temp)
        print("\n")
        show(current_card)

        if display_card != current_card:
            print("\x1B[5A",end="")
            for i in proc_card(display_card[0]):
                print(f"\x1B[3C{i}")
            print(f"\x1B[5B", end="")
        print("\n")
        show(cards_player, sel)

        for i in range(p_draw):
            cards_player.pop()
            if aval:
                cards_player.append(aval.pop(randrange(0,len(aval))))
                cards_player.append(["", "DRAW"])

            else:
                aval = new_aval()
                cards_player.append(aval.pop(randrange(0,len(aval))))
                cards_player.append(["", "DRAW"])

            _temp = []

            for i in cards_robot:
                _temp.append([color.WHITE, "BACK"])

            clear_screen()
            
            show(_temp)
            print("\n")
            show(current_card)

            if display_card != current_card:
                print("\x1B[5A",end="")
                for i in proc_card(display_card[0]):
                    print(f"\x1B[3C{i}")
                print(f"\x1B[5B", end="")
            print("\n")
            show(cards_player, sel)

            _temp = "DRAW"

            sleep(0.2)
            
        if _temp == "DRAW":
            p_draw = 0

        if card_robot[0][1] != "X" and card_robot[0][1] != "↪" or stop:
            clear_screen()
            stop = False

            _temp = []

            for i in cards_robot:
                _temp.append([color.WHITE, "BACK"])
            show(_temp)
            print("\n")
            
            show(current_card)

            if display_card != current_card:
                print("\x1B[5A",end="")
                for i in proc_card(display_card[0]):
                    print(f"\x1B[3C{i}")
                print(f"\x1B[5B", end="")
            
            print("\n")

            show(cards_player, sel)
            while True:
                if is_pressed("LEFT ARROW"):
                    if sel == 0:
                        continue

                    sel -= 1

                    clear_screen()

                    show(_temp)
                    print("\n")
                    show(current_card)

                    if display_card != current_card:
                        print("\x1B[5A",end="")
                        for i in proc_card(display_card[0]):
                            print(f"\x1B[3C{i}")
                        print(f"\x1B[5B", end="")
                    print("\n")
                    show(cards_player, sel)

                    sleep(0.2)

                if is_pressed("RIGHT ARROW"):
                    if sel == len(cards_player) - 1:
                        continue

                    sel += 1

                    clear_screen()

                    show(_temp)
                    print("\n")
                    show(current_card)

                    if display_card != current_card:
                        print("\x1B[5A",end="")
                        for i in proc_card(display_card[0]):
                            print(f"\x1B[3C{i}")
                        print(f"\x1B[5B", end="")
                    print("\n")
                    show(cards_player, sel)

                    sleep(0.2)

                if is_pressed("ENTER"):
                    if cards_player[sel][1] != "DRAW":
                        if cards_player[sel][1] == "+2":
                            if current_card[0][0] == color.BLUE or current_card[0][0] == color.RED:
                                current_card = [[current_card[0][0],""]]
                                r_draw = 2
                            else:
                                continue
                            sleep(0.5)

                        elif cards_player[sel][1] == "+4":
                            r_draw = 4
                            current_card = [[current_card[0][0],""]]
                            color_sel = 0
                            flush_input()
                            clear_screen()
                            show(current_card)
                            show([[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]], color_sel)
                            show(cards_player)
                            while True:
                                sleep(0.1)

                                if is_pressed("RIGHT ARROW"):
                                    if color_sel == 3:
                                        continue

                                    color_sel += 1

                                    clear_screen()
                                    show(current_card)
                                    show([[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]], color_sel)
                                    show(cards_player)
                                    
                                    sleep(0.1)

                                if is_pressed("LEFT ARROW"):
                                    if color_sel == 0:
                                        continue

                                    color_sel -= 1

                                    clear_screen()
                                    show(current_card)
                                    show([[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]], color_sel)
                                    show(cards_player)

                                    sleep(0.1)

                                if is_pressed("ENTER"):
                                    clear_screen()
                                    current_card = [[[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]][color_sel]]
                                    display_card = [[[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]][color_sel]]
                                    break
                            sleep(0.5)

                        elif cards_player[sel][1] == "+5":
                            r_draw = 5
                            current_card = [[current_card[0][0],""]]
                            sleep(0.5)

                        elif cards_player[sel][1] == "֎":
                            color_sel = 0
                            flush_input()
                            clear_screen()
                            show(current_card)
                            show([[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]], color_sel)
                            show(cards_player)
                            while True:
                                sleep(0.1)

                                if is_pressed("RIGHT ARROW"):
                                    if color_sel == 3:
                                        continue

                                    color_sel += 1

                                    clear_screen()
                                    show(current_card)
                                    show([[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]], color_sel)
                                    show(cards_player)
                                    
                                    sleep(0.1)

                                if is_pressed("LEFT ARROW"):
                                    if color_sel == 0:
                                        continue

                                    color_sel -= 1

                                    clear_screen()
                                    show(current_card)
                                    show([[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]], color_sel)
                                    show(cards_player)

                                    sleep(0.1)

                                if is_pressed("ENTER"):
                                    clear_screen()
                                    current_card = [[[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]][color_sel]]
                                    display_card = [[[color.BLUE, ""],[color.GREEN, ""],[color.RED, ""],[color.YELLOW, ""]][color_sel]]
                                    break

                        elif cards_player[sel][0] != current_card[0][0] and cards_player[sel][1] != current_card[0][1]:
                            continue

                    break

            clear_screen()

            if cards_player[sel][1] == "DRAW":
                cards_player.pop()
                if aval:
                    cards_player.append(aval.pop(randrange(0,len(aval))))
                    cards_player.append(["", "DRAW"])

                else:
                    aval = new_aval()
                    cards_player.append(aval.pop(randrange(0,len(aval))))
                    cards_player.append(["", "DRAW"])

                clear_screen()

                show(_temp)
                print("\n")
                show(current_card)

                if display_card != current_card:
                    print("\x1B[5A",end="")
                    for i in proc_card(display_card[0]):
                        print(f"\x1B[3C{i}")
                    print(f"\x1B[5B", end="")
                print("\n")
                show(cards_player, sel)

            else:
                card_player = [cards_player.pop(sel)]
                if card_player[0][0] != color.PURPLE: current_card = card_player
                display_card = card_player

                if card_player[0][1] == "X" or card_player[0][1] == "↪":
                    stop = True

            _temp = None

        else: card_player = [[None, None]]

        sleep(0.5)
        print("\n")

        #ROBOT

        _hidden = []
        for i in cards_robot:
            _hidden.append([color.WHITE, "BACK"])
        clear_screen()
                
        show(_hidden)
        print("\n")
        show(current_card)

        if display_card != current_card:
            print("\x1B[5A",end="")
            for i in proc_card(display_card[0]):
                print(f"\x1B[3C{i}")
            print(f"\x1B[5B", end="")
        print("\n")
        show(cards_player, sel)

        if not stop:
            _draw = False
            c = 0
            for i in range(r_draw):
                if aval:
                    cards_robot.append(aval.pop(randrange(0,len(aval))))

                else:
                    aval = new_aval()
                    cards_robot.append(aval.pop(randrange(0,len(aval))))

                _hidden = []
                for i in cards_robot:
                    _hidden.append([color.WHITE, "BACK"])
                clear_screen()
                
                show(_hidden)
                print("\n")
                show(current_card)

                if display_card != current_card:
                    print("\x1B[5A",end="")
                    for i in proc_card(display_card[0]):
                        print(f"\x1B[3C{i}")
                    print(f"\x1B[5B", end="")
                print("\n")
                show(cards_player, sel)
                
                _draw = True

                sleep(0.2)
            
            if _draw:
                r_draw = 0
                _draw = False
                if current_card[0][1] == "X" or current_card[0][1] == "↪": continue

            while True:
                if c > 10:
                    if aval:
                        cards_robot.append(aval.pop(randrange(0,len(aval))))

                    else:
                        aval = new_aval()
                        cards_robot.append(aval.pop(randrange(0,len(aval))))

                    _draw = True
                    break

                _temp = randrange(0,len(cards_robot))
                c += 1
                
                if p_draw != True:
                    _hidden = []
                    for i in cards_robot:
                        _hidden.append([color.WHITE, "BACK"])
                    if cards_robot[_temp][1] == "+2":
                        if current_card[0][0] == color.BLUE or current_card[0][0] == color.RED:
                            current_card = [[current_card[0][0],""]]
                            clear_screen()
                            
                            show(_hidden)
                            print("\n")
                            show(current_card)

                            if [[color.PURPLE, "+2"]] != current_card:
                                print("\x1B[5A",end="")
                                for i in proc_card([color.PURPLE, "+2"]):
                                    print(f"\x1B[3C{i}")
                                print(f"\x1B[5B", end="")
                            print("\n")
                            show(cards_player, sel)
                            p_draw = 2
                        else:
                            continue
                        sleep(0.5)

                    elif cards_robot[_temp][1] == "+4":
                        current_card = [[current_card[0][0],""]]
                        clear_screen()

                        show(_hidden)
                        print("\n")
                        show(current_card)

                        if [[color.PURPLE, "+4"]] != current_card:
                            print("\x1B[5A",end="")
                            for i in proc_card([color.PURPLE, "+4"]):
                                print(f"\x1B[3C{i}")
                            print(f"\x1B[5B", end="")
                        print("\n")
                        show(cards_player, sel)
                        p_draw = 4
                        counts = Counter(sublist[0] for sublist in cards_robot)
                        current_card = [[counts.most_common(1)[0][0],""]]
                        display_card = [[counts.most_common(1)[0][0],""]]
                        sleep(0.5)

                    elif cards_robot[_temp][1] == "+5":
                        current_card = [[current_card[0][0],""]]
                        clear_screen()

                        show(_hidden)
                        print("\n")
                        show(current_card)

                        if [[color.PURPLE, "+5"]] != current_card:
                            print("\x1B[5A",end="")
                            for i in proc_card([color.PURPLE, "+5"]):
                                print(f"\x1B[3C{i}")
                            print(f"\x1B[5B", end="")
                        print("\n")
                        show(cards_player, sel)
                        p_draw = 5
                        sleep(0.5)

                    elif cards_robot[_temp][1] == "֎":
                        counts = Counter(sublist[0] for sublist in cards_robot)
                        if counts.most_common(1)[0][0] == color.PURPLE:
                            current_card = [[counts.most_common(2)[0][0],""]]
                            display_card = [[counts.most_common(2)[0][0],""]]
                        else:
                            current_card = [[counts.most_common(1)[0][0],""]]
                            display_card = [[counts.most_common(1)[0][0],""]]

                    elif cards_robot[_temp][0] != current_card[0][0] and cards_robot[_temp][1] != current_card[0][1]:
                        continue
        
                break
            
            if _draw != True:
                card_robot = [cards_robot.pop(_temp)]
                if card_robot[0][0] != color.PURPLE: current_card = card_robot
                display_card = card_robot

            _temp = None

        else: card_robot = [[None, None]]

        _temp = []

        for i in cards_robot:
            _temp.append([color.WHITE, "BACK"])

        clear_screen()

        show(_temp)
        print("\n")
        show(current_card)

        if display_card != current_card:
            print("\x1B[5A",end="")
            for i in proc_card(display_card[0]):
                print(f"\x1B[3C{i}")
            print(f"\x1B[5B", end="")
        print("\n")
        show(cards_player, sel)
        
        _temp = None
        
        sleep(0.5)
        clear_screen()

    clear_screen()

    if len(cards_player) == 1:
        print(r"""
 __     ______  _    _    __          __ _____  _   _ 
 \ \   / / __ \| |  | |   \ \        / /|_   _|| \ | |
  \ \_/ / |  | | |  | |    \ \  /\  / /   | |  |  \| |
   \   /| |  | | |  | |     \ \/  \/ /    | |  | . ` |
    | | | |__| | |__| |      \  /\  /    _| |_ | |\  |
    |_|  \____/ \____/        \/  \/    |_____||_| \_|
""")
        flush_input()
        input("")

    if len(cards_robot) == 0:
        print(r"""
 __     ______  _    _     _      ____   _____ ______ 
 \ \   / / __ \| |  | |   | |    / __ \ / ____|  ____|
  \ \_/ / |  | | |  | |   | |   | |  | | (___ | |__   
   \   /| |  | | |  | |   | |   | |  | |\___ \|  __|  
    | | | |__| | |__| |   | |___| |__| |____) | |____ 
    |_|  \____/ \____/    |______\____/|_____/|______|
""")
        flush_input()
        input("")

if __name__ == "__main__":
    while True:
        try:
            main()
        except KeyboardInterrupt:
            if input("Are you sure you want to exit: [Y/N] (default N): ") == "Y": break