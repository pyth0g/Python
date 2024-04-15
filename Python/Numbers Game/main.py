import random
import msvcrt
from os import system
import math
import time

game_loop = True

def nxt_move(pl_arr: list, highs: int):
    half_pl = math.ceil(len(pl_arr) / 2)

    if highs > 3:
        if len(pl_arr) > half_pl:
            val = pl_arr[random.randrange(half_pl, len(pl_arr))]
        else:
            val = pl_arr[random.randrange(0, len(pl_arr))]
    else:
        if random.randrange(1, 3) != 3:
            if len(pl_arr) > half_pl:
                val = pl_arr[random.randrange(0, half_pl)]
            else:
                val = pl_arr[0]
        else:
            if len(pl_arr) > half_pl:
                val = pl_arr[random.randrange(half_pl, len(pl_arr))]
            else:
                val = pl_arr[0]

    pl_arr.remove(val)
    return val

def player_input(pl_arr: list):
    system("cls")
    print(f"{" _  "*len(pl_arr)}\n{" ".join([f"|{i}|" for i in pl_arr])}\n{" ̅   "*len(pl_arr)}")
    while True:
        print("Select one of your cards: ")
        sel1 = msvcrt.getch().decode()
        try: sel1 = int(sel1) 
        except: pass
        if sel1 in pl_arr:
            break
        print("Pick a card from your deck!")

    pl_arr.remove(sel1)

    return sel1

def main():
    deck = [1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9]
    
    treshold1 , treshold2 = 5, 5 

    highs1, lows1, highs2, lows2 = 0, 0, 0, 0
    pt1, pt2 = 0, 0

    pl1 = [deck.pop(random.randrange(0,len(deck))) for i in range(9)]
    pl2 = [deck.pop(random.randrange(0,len(deck))) for i in range(9)]
    while True:
        sel1 = nxt_move(pl1,highs1)

        if sel1 >= treshold1: highs2 += 1
        else: lows2 += 1

        sel2 = nxt_move(pl2,highs2)

        if sel2 >= treshold2: highs1 += 1
        else: lows1 += 1

        if sel1 > sel2:
            pt1 += 1

        elif sel1 < sel2:
            pt2 += 1

        else:
            pass

        if len(pl1) == 0:
            if pt1 > pt2:
                print("Player 1 wins!")
            elif pt1 < pt2:
                print("Player 2 wins!")
            else:
                print("Draw!")

            print(f"{pt1}:{pt2}")
            break

while game_loop:
    main()