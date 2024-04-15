from typing import Generator

last_nrows = None

class Grid:
    """
    Change grid size with Grid.size
    """
    #▤▥▦▧▨▣▩∎■□⊞⊟⊠⊡❏❐❑❒🟥🟧🟨🟩🟦🟪🟫⬛⬜▫️▪️

    def __init__(self):
        self.size = (10,10)

    @classmethod
    def _iterate(self):
        x = -1
        y = -1

        for i in range(self.size[1]+1):
            y += 1
            for j in range(self.size[0]+1):
                x += 1
                yield (x,y)
            x = -1

    @classmethod
    def create(self,*args: list,bg=" ",ln=1) -> str:
        """
        Into args pass: [char,(x,y)], for every character.
        Creates one character for every position provided in the tuples, a character in its respectable position inside the chars array is chosen.
        Options bg and ln set the background character and space between lines.
        """

        frame = ""
        for current_x,current_y in Grid._iterate():
            if (current_x,current_y) in [item[1] for item in args]:
                pos = [item[1] for item in args].index((current_x,current_y))
                frame += args[pos][0]

            else:
                frame += bg

            if current_x == self.size[0]:
                frame += "\n"*ln

        return frame
    
    @classmethod
    def wall_collision(self,pos: tuple) -> Generator[str | bool, str | bool, str | bool]:
        """
        Returns w, e, n, s, False depending on what wall positions are overlapping. 
        Example usage: if not "n" in [collision for collision in dos.Grid.wall_collision(pos1,check)]: ...
        """
        current_x,current_y = pos
        _any = False

        if current_x == 0:
            _any = True
            yield "w"
        
        if current_x == self.size[0]:
            _any = True
            yield "e"
                
        if current_y == 0:
            _any = True
            yield "n"
        
        if current_y == self.size[1]:
            _any = True
            yield "s"
        
        if not _any:
            yield False

    @classmethod
    def collision(self,pos: tuple, check: list[tuple]) -> Generator[str | bool, str | bool, str | bool]:
        """
        Returns w, e, n, s, False depending on what wall positions are overlapping. 
        Example usage: if not "n" in [collision for collision in dos.Grid.collision(pos1,object)]: ...
        """

        _any = False

        if pos in check:
            _any = True
            yield "i"

        if (pos[0] + 1, *pos[1:]) in check:
            _any = True
            yield "e"
        
        if (pos[0] - 1, *pos[1:]) in check:
            _any = True
            yield "w"

        if (pos[0], pos[1] + 1, *pos[2:]) in check:
            _any = True
            yield "s"
        
        if (pos[0], pos[1] - 1, *pos[2:]) in check:
            _any = True
            yield "n"
        
        if not _any:
            yield False

    def rect(*args: list) -> tuple:
        """
        Pass in a string char, a tuple of x1 and y1 and a tuple of x2 and y2 all in an array, so: [char,(x1,y1),(x2,y2)].
        It can be placed into the create function like so: dos.Grid.create(*dos.Grid.rect([char,(x1,y1),(x2,y2)])), more characters can be added.
        """
        rect = []

        for arg in args:
            try:
                char = arg[0]
                x1,y1 = arg[1]
                x2,y2 = arg[2]
            except IndexError:
                print("Args has to be a list!")
                break

            height = y2 - y1
            width = x2 - x1

            for i in range(width):
                rect.append([char,(x1+i,y1)])

            for i in range(height):
                rect.append([char,(x2,y1+i)])

            for i in range(width):
                rect.append([char,(x2-i,y2)])

            for i in range(height):
                rect.append([char,(x1,y2-i)])
 
        return tuple(rect)

class Display:
    def __init__(self) -> None:
        pass

    def _csi(frames:list):
        global last_nrows

        csi_up = f"\x1B[{last_nrows}A"
        csi_clr= "\x1B[0K"
            
        if last_nrows is None:
            print('\n'*(len(frames)-1))
            csi_up = f"\x1B[{len(frames)}A"
        else:
            if last_nrows > len(frames):
                print(f'{csi_up}{csi_clr}')
                for r in range(1, last_nrows ): print(f'{csi_clr}')
            
        last_nrows = len(frames)
        print(f'{csi_up}{frames[0]}{csi_clr}')
        for r in range(1, len(frames)): print(f'{frames[r]}{csi_clr}')

    def print(frame: str,nl_sep="\n") -> None:
        Display._csi(str(frame).split(nl_sep))