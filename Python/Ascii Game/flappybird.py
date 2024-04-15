import AsciiGame
import time
import random

AsciiGame.Grid.size = (100, 30)

player_pos = [8, 18]

rand1 = random.randrange(92,99)
pillar1_top = [rand1, 0]
pillar1_bottom = [rand1 + 1, 6]

rand2 = random.randrange(79, 89)
pillar2_top = [rand2, 0]
pillar2_bottom = [rand2 + 1, 6]

rand3 = random.randrange(50, 76)
pillar3_top = [rand3,0]
pillar3_bottom = [rand3 + 1, 6]

#▤▥▦▧▨▣▩∎■□⊞⊟⊠⊡

player = "🟨"
pillar = "🟩"

pipe_dist = 10

while True:
    frame = AsciiGame.Grid.create([player,tuple(player_pos)],["",(player_pos[0] + 1, player_pos[1])],*AsciiGame.Grid.rect([pillar,pillar1_top,pillar1_bottom]),
                                    *AsciiGame.Grid.rect([pillar,pillar2_top,pillar2_bottom]),*AsciiGame.Grid.rect([pillar,pillar3_top,pillar3_bottom]), *AsciiGame.Grid.rect([pillar,(pillar1_top[0], pillar1_top[1] - pipe_dist),
                                    *AsciiGame.Grid.rect(pillar1_bottom[0], pillar1_bottom[1] - pipe_dist)]),*AsciiGame.Grid.rect([pillar,(pillar2_top[0], pillar2_top[1] - pipe_dist),(pillar2_bottom[0], pillar2_bottom[1] - pipe_dist)]),*AsciiGame.Grid.rect([pillar,(pillar3_top[0], pillar3_top[1] - pipe_dist),(pillar3_bottom[0], pillar3_bottom[1] - pipe_dist)]))
    AsciiGame.Display.print(frame)

    pillar1_top[0] -= 1
    pillar1_bottom[0] -= 1

    pillar2_top[0] -= 1
    pillar2_bottom[0] -= 1

    pillar3_top[0] -= 1
    pillar3_bottom[0] -= 1

    if pillar1_bottom[0] < -1:
        rand1 = random.randrange(70, 100)

        pillar1_top[0] = rand1
        pillar1_bottom[0] = rand1 + 1

    if pillar2_bottom[0] < -1:
        rand2 = random.randrange(70, 100)

        pillar2_top[0] = rand2
        pillar2_bottom[0] = rand2 + 1

    if pillar3_bottom[0] < -1:
        rand3 = random.randrange(70, 100)

        pillar3_top[0] = rand3
        pillar3_bottom[0] = rand3 + 1

    time.sleep(0.05)