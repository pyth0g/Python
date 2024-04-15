def keyboard_shortcut(txt):
    clip = []
    res = []
    for word in txt.replace('Ctrl + ','~').split():
        if word == '~C':
            clip = res[:]
        elif word == '~V':
            res += clip
        else:
            res.append(word)
    return ' '.join(res)

print(keyboard_shortcut("You gotta copy something Ctrl + V first my Ctrl + V guy"))