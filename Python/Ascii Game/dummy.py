import AsciiGame
import keyboard
import time

pos1 = [8,9]
pos2 = [8,10]

#▤▥▦▧▨▣▩∎■□⊞⊟⊠⊡

char1 = "⊠"
char2 = "⊡"

AsciiGame.Grid.size = (40,20)

while True:
    obj = [*AsciiGame.Grid.rect(["w",(10,10),(20,15)]),*AsciiGame.Grid.rect(["~",(11,11),(19,14)]),*AsciiGame.Grid.rect(["~",(12,12),(18,13)])]
    obj_pos = [obj[i][1] for i in range(len(obj))]
    frame = AsciiGame.Grid.create([char1,tuple(pos1)],[char2,tuple(pos2)],*AsciiGame.Grid.rect(["w",(10,10),(20,15)]),*AsciiGame.Grid.rect(["~",(11,11),(19,14)]),*AsciiGame.Grid.rect(["~",(12,12),(18,13)]),bg=" ")

    AsciiGame.Display.print(frame)

    if not "n" in [coll for coll in AsciiGame.Grid.wall_collision(pos1)] and "n" not in [coll for coll in AsciiGame.Grid.collision(pos1,obj_pos)]:
        if keyboard.is_pressed("w"):
            pos1[1] -= 1

    if not "s" in [coll for coll in AsciiGame.Grid.wall_collision(pos1)] and "s" not in [coll for coll in AsciiGame.Grid.collision(pos1,obj_pos)]:
        if keyboard.is_pressed("s"):
            pos1[1] += 1

    if not "w" in [coll for coll in AsciiGame.Grid.wall_collision(pos1)] and "w" not in [coll for coll in AsciiGame.Grid.collision(pos1,obj_pos)]:
        if keyboard.is_pressed("a"):
            pos1[0] -= 1

    if not "e" in [coll for coll in AsciiGame.Grid.wall_collision(pos1)] and "e" not in [coll for coll in AsciiGame.Grid.collision(pos1,obj_pos)]:
        if keyboard.is_pressed("d"):
            pos1[0] += 1

    if not "n" in [coll for coll in AsciiGame.Grid.wall_collision(pos2)] and "n" not in [coll for coll in AsciiGame.Grid.collision(pos2,obj_pos)]:
        if keyboard.is_pressed("UP_ARROW"):
            pos2[1] -= 1

    if not "s" in [coll for coll in AsciiGame.Grid.wall_collision(pos2)] and "s" not in [coll for coll in AsciiGame.Grid.collision(pos2,obj_pos)]:
        if keyboard.is_pressed("DOWN_ARROW"):
            pos2[1] += 1

    if not "w" in [coll for coll in AsciiGame.Grid.wall_collision(pos2)] and "w" not in [coll for coll in AsciiGame.Grid.collision(pos2,obj_pos)]:
        if keyboard.is_pressed("LEFT_ARROW"):
            pos2[0] -= 1

    if not "e" in [coll for coll in AsciiGame.Grid.wall_collision(pos2)] and "e" not in [coll for coll in AsciiGame.Grid.collision(pos2,obj_pos)]:
        if keyboard.is_pressed("RIGHT_ARROW"):
            pos2[0] += 1

    time.sleep(0.1)