from os import system
from msvcrt import getch
from sys import exit
from typing import Union

system("cls")

pawn = ["\033[1m\033[38;5;16m♙", "\033[1m♙"]
rook = ["\033[1m\033[38;5;16m♜", "\033[1m♜"]
knight = ["\033[1m\033[38;5;16m♞", "\033[1m♞"]
bishop = ["\033[1m\033[38;5;16m♝", "\033[1m♝"]
queen = ["\033[1m\033[38;5;16m♛", "\033[1m♛"]
king = ["\033[1m\033[38;5;16m♚", "\033[1m♚"]

BLACK = 0
WHITE = 1

class color:
   DARK_RED = '\033[48;5;124m'
   RED = '\033[48;5;160m'
   DARK_GREEN = '\033[48;5;70m'
   GREEN = '\033[48;5;76m'
   WHITE = '\033[48;5;180m'
   BLACK = '\033[48;5;94m'
   END = '\033[0m'

class _Print:
    def __init__(self) -> None:
        pass

    last_nrows = None
    def _csi(values: list) -> None:
        csi_up = f"\x1B[{_Print.last_nrows}A"
        csi_clr= "\x1B[0K"
                
        if _Print.last_nrows is None:
            print('\n'*(len(values) - 1))
            csi_up = f"\x1B[{len(values)}A"
        else:
            if _Print.last_nrows > len(values):
                print(f'{csi_up}{csi_clr}')
                for r in range(1,_Print.last_nrows): print(f'{csi_clr}')
                
        _Print.last_nrows = len(values) + 2
        print(f'{csi_up}{values[0]}{csi_clr}')
        for r in range(1, len(values)): print(f'{values[r]}{csi_clr}')

def override_print(*values: object,sep: str = " ",nl_sep: str = "\n") -> None:
    last_str = ""
    for value in values:
        if len(values) > 1:
            last_str += str(value) + str(sep) if value != values[ - 1] else str(value)
            _Print._csi(last_str.split(nl_sep))
        else:
            _Print._csi(str(value).split(nl_sep))

class Board:
    def __init__(self) -> None:
        self.pos = [{pawn[BLACK]: ["a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7"], knight[BLACK]: ["b8", "g8"], bishop[BLACK]: ["c8", "f8"], rook[BLACK]: ["a8", "h8"], queen[BLACK]: ["d8"], king[BLACK]: ["e8"]},
                    {pawn[WHITE]: ["a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"], knight[WHITE]: ["b1", "g1"], bishop[WHITE]: ["c1", "f1"], rook[WHITE]: ["a1", "h1"], queen[WHITE]: ["d1"], king[WHITE]: ["e1"]}]
    
    def ischeck(self, _pos: str, king_color: int, board = None):
        if not board: board = self.pos
        king_pos = _pos
        for pos_list in board[WHITE if king_color == BLACK else BLACK].values():
            for pos in pos_list:
                if Board.possible_moves(self, pos):
                    if king_pos in [i[0] for i in Board.possible_moves(self, pos)]:
                        return pos
        return False
    
    def get_pos(self, char: list, color: int) -> list:
        return self.pos[color][char[color]]


    def move(self, eat: bool, _old: str, _new: str) -> Union[list, bool]:
        if eat:
            i1, i2 = Board.get_piece(self.pos, _new)[2], Board.get_piece(self.pos, _new)[0]
            temp = self.pos[i1][i2]
            temp.pop(Board.get_piece(self.pos, _new)[1])
            self.pos[i1][i2] = temp

        self.pos[Board.get_piece(self.pos, _old)[2]][Board.get_piece(self.pos, _old)[0]][Board.get_piece(self.pos, _old)[1]] = _new
        return self.pos
    
    def get_board(self) -> list:
        return self.pos
    
    def on_board(pos: str) -> bool:
        if pos[0] not in ["a", "b", "c", "d", "e", "f", "g", "h"]:
            return False
        
        if pos[1] not in [str(i) for i in range(1,9)]:
            return False
        
        return True
    
    def possible_moves(self, pos: str) -> list:
        board = self.pos
        if not Board.get_piece(board, pos): return None
        piece, _, color = Board.get_piece(board, pos)
        moves = []
        EAT = WHITE if color == BLACK else BLACK

        if piece in pawn:
            if color == WHITE:
                if pos[0] != "h":
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 1}"):
                        if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 1}")[2] == EAT:
                            moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 1}", True])

                if pos[0] != "a":
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 1}"):
                        if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 1}")[2] == EAT:
                            moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 1}", True])

                if pos[1] != "1":
                    if not Board.get_piece(board,f"{pos[0]}{int(pos[1]) + 1}"):
                        moves.append([f"{pos[0]}{int(pos[1]) + 1}", False])

                if pos[1] == "2":
                    if not Board.get_piece(board,f"{pos[0]}{int(pos[1]) + 2}"):
                        moves.append([f"{pos[0]}{int(pos[1]) + 2}", False])
            else:
                if pos[0] != "h":
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 1}"):
                        if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 1}")[2] == EAT:
                            moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 1}", True])

                if pos[0] != "a":
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 1}"):
                        if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 1}")[2] == EAT:
                            moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 1}", True])

                if pos[1] != "1":
                    if not Board.get_piece(board,f"{pos[0]}{int(pos[1]) - 1}"):
                        moves.append([f"{pos[0]}{int(pos[1]) - 1}", False])

                if pos[1] == "7":
                    if not Board.get_piece(board,f"{pos[0]}{int(pos[1]) - 2}"):
                        moves.append([f"{pos[0]}{int(pos[1]) - 2}", False])

        if piece in rook:
            i = 1
            while ord(pos[0]) + i != ord("h") + 1:
                if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1])}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1])}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1])}", True])
                        
                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1])}", False])

                i += 1

            i = 1
            while ord(pos[0]) - i != ord("a") - 1:
                if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1])}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1])}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1])}", True])
                        
                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1])}", False])

                i += 1

            i = 1
            while str(int(pos[1]) - i) != "1":
                if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) + i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) + i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) + i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) + i}", False])

                i += 1

            i = 1
            while str(int(pos[1]) + i) != "8":
                if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) - i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) - i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) - i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) - i}", False])

                i += 1

        if piece in knight:
            knight_pos = [
             f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 2}",
             f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 2}",
             f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 2}",
             f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 2}",
             f"{chr(ord(pos[0]) + 2)}{int(pos[1]) - 1}",
             f"{chr(ord(pos[0]) + 2)}{int(pos[1]) + 1}",
             f"{chr(ord(pos[0]) - 2)}{int(pos[1]) - 1}",
             f"{chr(ord(pos[0]) - 2)}{int(pos[1]) + 1}"
            ]

            for pos in knight_pos:
                if Board.on_board(pos):
                    if Board.get_piece(board, pos):
                        if Board.get_piece(board, pos)[2] == EAT:
                            moves.append([pos, True])

                        break

                    else:
                        moves.append([pos, False])

        if piece in bishop:
            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}", False])

                i += 1

            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}", False])

                i += 1

            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}", False])

                i += 1

            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}", False])

                i += 1

        if piece in queen:
            i = 1
            while ord(pos[0]) + i != ord("h") + 1:
                if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1])}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1])}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1])}", True])
                        
                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1])}", False])

                i += 1

            i = 1
            while ord(pos[0]) - i != ord("a") - 1:
                if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1])}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1])}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1])}", True])
                        
                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1])}", False])

                i += 1

            i = 1
            while int(pos[1]) - i != "1":
                if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) + i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) + i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) + i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) + i}", False])

                i -= 1

            i = 1
            while int(pos[1]) + i < 8:
                if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) - i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) - i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) - i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) - i}", False])

                i += 1


            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) - i}", False])

                i += 1

            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) + i}", False])

                i += 1

            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) - i)}{int(pos[1]) - i}", False])

                i += 1

            i = 1
            while Board.on_board(f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + i}"):
                    if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + i}")[2] == EAT:
                        moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}", True])

                    break

                else:
                    moves.append([f"{chr(ord(pos[0]) + i)}{int(pos[1]) + i}", False])

                i += 1

        if piece in king:
            if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1])}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1])}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1])}", True])

            else:
                moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1])}", False])

            if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1])}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1])}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1])}", True])

            else:
                moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1])}", False])

            if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) + 1}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) + 1}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) + 1}", True])

            else:
                moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) + 1}", False])

            if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) - 1}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]))}{int(pos[1]) - 1}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) - 1}", True])

            else:
                moves.append([f"{chr(ord(pos[0]))}{int(pos[1]) - 1}", False])

            if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 1}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 1}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 1}", True])

            else:
                moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1]) - 1}", False])

            if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 1}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 1}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 1}", True])

            else:
                moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1]) + 1}", False])

            if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 1}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 1}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 1}", True])

            else:
                moves.append([f"{chr(ord(pos[0]) - 1)}{int(pos[1]) - 1}", False])

            if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 1}"):
                if Board.get_piece(board,f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 1}")[2] == EAT:
                    moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 1}", True])

            else:
                moves.append([f"{chr(ord(pos[0]) + 1)}{int(pos[1]) + 1}", False])

        return [list(move) for move in set(tuple(sublist) for sublist in moves)] if [list(move) for move in set(tuple(sublist) for sublist in moves)] else None

    def get_piece(board: list, pos: str) -> list:
        bw = BLACK
        for dict in board:
            for key, value in dict.items():
                for c, i in enumerate(value):
                    if i == pos:
                        return [key, c, bw]
                    
            bw = WHITE
                    
        return None

    def render(self, board: list, turn: int, highlight: list = []) -> str:
        display = f"{f"{("WHITE" if turn == WHITE else "BLACK")}".center(25)}\n\n"
        ct = False
        h = False
        for n in list(range(8, 0, -1)):
            display += f"{" "*3}{n} "
            for l in ["a", "b", "c", "d", "e", "f", "g", "h"]:
                piece = Board.get_piece(board, f"{l}{n}")
                if highlight:
                    for pos, eat in highlight:
                        if pos == f"{l}{n}":
                            h = True
                            if eat:
                                display += f"{color.RED if ct else color.DARK_RED}{piece[0]} {color.END}"
                                piece = None
                            else:
                                display += f"{color.DARK_GREEN if ct else color.GREEN}{piece[0]} {color.END}" if piece else f"{color.DARK_GREEN if ct else color.GREEN}{" "*2}{color.END}"
                                piece = None

                display += f"{color.BLACK if ct else color.WHITE}{piece[0]} {color.END}" if piece else f"{color.BLACK if ct else color.WHITE}{" "*2}{color.END}" if not h else ""
                h = False
                ct = False if ct else True
            ct = False if ct else True

            display += "\n"

        display += f"{" "*5}a b c d e f g h"

        return display

def main():
    override_print("") #clear screen

    chess = Board()
    board = chess.get_board()

    template1 = lambda render, l, n: f"{render}\n{f"{l}{n} -> __".center(24)}"
    template2 = lambda render, old: f"{render}\n{f"{old} -> __".center(24)}"
    template3 = lambda render, l, n, old: f"{render}\n{f"{old} -> {l}{n}".center(24)}"

    turn = WHITE

    while True:
        rst = False
        render = chess.render(board, turn)

        check = turn if chess.ischeck(chess.get_pos(king, turn)[0], BLACK) else None

        if check != turn:
            while True:
                l = "_"
                n = "_"
                override_print(template1(render,l,n))
                prev_char = None
                while True:
                    char = str(getch())[2:-1]
                    if char == "\\r":
                        char = prev_char
                        if l and n: break
                        else: continue

                    if char == "\\x08":
                        l = "_"
                        n = "_"
                        char = prev_char
                        rst = True
                        break

                    if char in ["a", "b", "c", "d", "e", "f", "g", "h"] or char in [str(i) for i in range(1,9)]:
                        if char in ["a", "b", "c", "d", "e", "f", "g", "h"]:
                            prev_char = char
                            l = char
                            override_print(template1(render,l,n))

                        elif char in [str(i) for i in range(1,9)]:
                            prev_char = char
                            n = char
                            override_print(template1(render,l,n))
                        
                if rst: break
                
                old = f"{l}{n}"

                if chess.possible_moves(old):
                    if True in [Board.on_board(i[0]) for i in chess.possible_moves(old)]:
                        if Board.get_piece(board, old)[2] == turn:
                            render = chess.render(board, turn, chess.possible_moves(old))
                            override_print(template2(render,old))
                            break
            if rst: continue

            while True:
                override_print(template2(render,old))

                l = "_"
                n = "_"
                prev_char = None
                while True:
                    char = str(getch())[2:-1]
                    if char == "\\r":
                        char = prev_char
                        if l and n: break
                        else: continue

                    if char == "\\x08":
                        l = "_"
                        n = "_"
                        char = prev_char
                        rst = True
                        break

                    if char in ["a", "b", "c", "d", "e", "f", "g", "h"] or char in [str(i) for i in range(1,9)]:
                        if char in ["a", "b", "c", "d", "e", "f", "g", "h"]:
                            prev_char = char
                            l = char
                            override_print(template3(render,l,n,old))

                        elif char in [str(i) for i in range(1,9)]:
                            prev_char = char
                            n = char
                            override_print(template3(render,l,n,old))

                if rst: break
                
                new = f"{l}{n}"

                if new in [i[0] for i in chess.possible_moves(old)]:
                    eat = chess.possible_moves(old)[[i[0] for i in chess.possible_moves(old)].index(new)][1]
                    break

            if rst: continue

        else:
            any_valid = False

            king_pos = chess.get_pos(king, turn)[0]
            possible = []

            for moves_list in chess.get_board()[turn].values():
                for j in moves_list:
                    if chess.possible_moves(j):
                        if Board.get_piece(board, j)[2] == turn:
                            if True in [Board.on_board(i[0]) for i in chess.possible_moves(j)]:
                                for move in chess.possible_moves(j):
                                    if move[0] in chess.possible_moves(chess.ischeck(king_pos,turn)) or move[0] == chess.ischeck(king_pos,turn):
                                        possible.append(move)

                                        any_valid = True

            if not any_valid:
                system("cls")
                if turn == BLACK:
                    print(r"""
      _____ _               _                    _                     _     _ _                              _ 
     / ____| |             | |                  | |                   | |   (_) |                            | |
    | |    | |__   ___  ___| | ___ __ ___   __ _| |_ ___     __      _| |__  _| |_ ___   __      _____  _ __ | |
    | |    | '_ \ / _ \/ __| |/ / '_ ` _ \ / _` | __/ _ \    \ \ /\ / / '_ \| | __/ _ \  \ \ /\ / / _ \| '_ \| |
    | |____| | | |  __/ (__|   <| | | | | | (_| | ||  __/_    \ V  V /| | | | | ||  __/   \ V  V / (_) | | | |_|
     \_____|_| |_|\___|\___|_|\_\_| |_| |_|\__,_|\__\___( )    \_/\_/ |_| |_|_|\__\___|    \_/\_/ \___/|_| |_(_)
                                                        |/                                                      
                                                                                                                
                        """)

                else:
                    print(r"""
      _____ _               _                    _            _     _            _                           _ 
     / ____| |             | |                  | |          | |   | |          | |                         | |
    | |    | |__   ___  ___| | ___ __ ___   __ _| |_ ___     | |__ | | __ _  ___| | __  __      _____  _ __ | |
    | |    | '_ \ / _ \/ __| |/ / '_ ` _ \ / _` | __/ _ \    | '_ \| |/ _` |/ __| |/ /  \ \ /\ / / _ \| '_ \| |
    | |____| | | |  __/ (__|   <| | | | | | (_| | ||  __/_   | |_) | | (_| | (__|   <    \ V  V / (_) | | | |_|
     \_____|_| |_|\___|\___|_|\_\_| |_| |_|\__,_|\__\___( )  |_.__/|_|\__,_|\___|_|\_\    \_/\_/ \___/|_| |_(_)
                                                        |/                                                     
                                                                                                                
    """)
                exit()

            while True:
                l = "_"
                n = "_"
                override_print(template1(render,l,n))
                prev_char = None
                while True:
                    char = str(getch())[2:-1]
                    if char == "\\r":
                        char = prev_char
                        if l and n: break
                        else: continue

                    if char == "\\x08":
                        l = "_"
                        n = "_"
                        char = prev_char
                        rst = True
                        break

                    if char in ["a", "b", "c", "d", "e", "f", "g", "h"] or char in [str(i) for i in range(1,9)]:
                        if char in ["a", "b", "c", "d", "e", "f", "g", "h"]:
                            prev_char = char
                            l = char
                            override_print(template1(render,l,n))

                        elif char in [str(i) for i in range(1,9)]:
                            prev_char = char
                            n = char
                            override_print(template1(render,l,n))
                        
                if rst: break
                
                old = f"{l}{n}"
                old_valid = False
                possible = []

                if chess.possible_moves(old):
                    if Board.get_piece(board, old)[2] == turn:
                        if True in [Board.on_board(i[0]) for i in chess.possible_moves(old)]:
                            for move in chess.possible_moves(old):
                                if move[0] in chess.possible_moves(chess.ischeck(king_pos,turn)) or move[0] == chess.ischeck(king_pos,turn):
                                    possible.append(move)
                                    old_valid = True
                                
                if old_valid:
                    render = chess.render(board, turn, possible)
                    override_print(template2(render,old))
                    break

                else:
                    continue 
        
            while True:
                l = "_"
                n = "_"
                prev_char = None
                override_print(template3(render,l,n,old))
                while True:
                    char = str(getch())[2:-1]
                    if char == "\\r":
                        char = prev_char
                        if l and n: break
                        else: continue

                    if char == "\\x08":
                        l = "_"
                        n = "_"
                        char = prev_char
                        rst = True
                        break

                    if char in ["a", "b", "c", "d", "e", "f", "g", "h"] or char in [str(i) for i in range(1,9)]:
                        if char in ["a", "b", "c", "d", "e", "f", "g", "h"]:
                            prev_char = char
                            l = char
                            override_print(template3(render,l,n,old))

                        elif char in [str(i) for i in range(1,9)]:
                            prev_char = char
                            n = char
                            override_print(template3(render,l,n,old))

                new = f"{l}{n}"

                if new in [i[0] for i in possible]:
                    eat = possible[[i[0] for i in possible].index(new)][1]
                    break

                if rst: break

            if rst: continue

        chess.move(eat, old, new)

        turn = BLACK if turn == WHITE else WHITE

if __name__ == "__main__":
    main()