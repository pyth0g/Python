off = False
root = None

while True:
    if off == True:
        break

    import tkinter as tk
    import subprocess
    import sys
    import random
    import threading    

    root = tk.Tk()
    root.focus_set()
    root.title("Snake")
    root.configure(background="black")
    canvas_width = 300
    canvas_height = 300
    root.geometry(f"{canvas_width}x{canvas_height}")
    root.resizable(False, False)
    canvas = tk.Canvas(root, background="black", highlightthickness=0)
    canvas.pack(fill=tk.BOTH, expand=True)
    root.deiconify()
    root.lift()
    root.focus_force()
    canvas.focus_set()

    GRID_SIZE = 10
    point = 0
    firstapple = True
    collision = 0
    direction = "right"
    snake_segments = [(50, 50, 60, 60)]
    size = 1
    apple = None
    pause = False

    def spawn_apple():
        global apple
        x1 = random.randint(0, (canvas_width - GRID_SIZE) // GRID_SIZE) * GRID_SIZE
        y1 = random.randint(0, (canvas_height - GRID_SIZE) // GRID_SIZE) * GRID_SIZE
        x2 = x1 + GRID_SIZE
        y2 = y1 + GRID_SIZE
        apple = canvas.create_rectangle(x1, y1, x2, y2, fill="red", outline="black", tags="apple")

    spawn_apple()

    def right(event):
        global direction
        if point == 0:
            direction = "right"
        else:
            if direction != "left":
                direction = "right"

    def left(event):
        global direction
        if point == 0:
            direction = "left"
        else:
            if direction != "right":
                direction = "left"

    def up(event):
        global direction
        if point == 0:
            direction = "up"
        else:
            if direction != "down":
                direction = "up"

    def down(event):
        global direction
        if point == 0:
            direction = "down"
        else:
            if direction != "up":
                direction = "down"

    def you_lose():
        global off
        root.destroy()
        play = subprocess.run(f"""powershell -Command "[System.Reflection.Assembly]::LoadWithPartialName('System.Windows.Forms'); [System.Windows.Forms.MessageBox]::Show('You Lost with {point} points. Retry?', 'You Lost with {point} points. Retry?', 4)" """, stdout=subprocess.PIPE, creationflags=subprocess.CREATE_NO_WINDOW)
        play = ((play.stdout).decode("utf-8"))
        if "Yes" in play:
            pass
        else:
            off = True
            sys.exit()

    def move_player(dx, dy):
        global collision
        x1, y1, x2, y2 = snake_segments[0]
        new_x1, new_y1, new_x2, new_y2 = x1 + dx, y1 + dy, x2 + dx, y2 + dy

        if new_x1 < 0 or new_x2 > canvas_width or new_y1 < 0 or new_y2 > canvas_height:
            collision += 1
            if not collision <= 2:
                you_lose()
            else:
                pass
        else:
            snake_segments[0] = (new_x1, new_y1, new_x2, new_y2)
            check_self_collision()

    def on_canvas_resize(event):
        global canvas_width, canvas_height
        canvas_width = event.width
        canvas_height = event.height

    def check_self_collision():
        for i in range(1, len(snake_segments)):
            if snake_segments[0] == snake_segments[i]:
                you_lose()

    def eat():
        global firstapple, apple, size, point
        root.title(f"Snake - {point} points")
        if apple:
            if firstapple:
                size += 1
                firstapple = False
            x1, y1, x2, y2 = snake_segments[0]
            apple_coords = canvas.coords(apple)
            if (
                    x1 < apple_coords[2] and
                    x2 > apple_coords[0] and
                    y1 < apple_coords[3] and
                    y2 > apple_coords[1]
            ):
                size += 1
                point += 1
                canvas.delete(apple)
                spawn_apple()
        else:
            spawn_apple()

    def update_snake():
        try:    
            if not pause:
                if direction == "right":
                    move_player(GRID_SIZE, 0)
                if direction == "left":
                    move_player(-GRID_SIZE, 0)
                if direction == "up":
                    move_player(0, -GRID_SIZE)
                if direction == "down":
                    move_player(0, GRID_SIZE)

                snake_segments.insert(0, snake_segments[0])

                if len(snake_segments) > size:
                    snake_segments.pop()

                canvas.delete("snake")
                
                for segment in snake_segments:
                    x1, y1, x2, y2 = segment
                    canvas.create_rectangle(x1, y1, x2, y2, fill="white", outline="black", tags="snake")

                eat()

                root.after(100, update_snake)
        except:
            pass
    def programPause(event=None):
        global pause
        if pause:
            pause = False
            update_snake()
        else:
            pause = True

    def stop():
        sys.exit()

    root.protocol("WM_DELETE_WINDOW", stop)
    root.bind("<Right>", right)
    root.bind("<Left>", left)
    root.bind("<Up>", up)
    root.bind("<Down>", down)
    root.bind("<d>", right)
    root.bind("<a>", left)
    root.bind("<w>", up)
    root.bind("<s>", down)
    root.bind("<Escape>",programPause)
    canvas.bind("<Configure>", on_canvas_resize)

    update_snake()
    root.mainloop()