import ollama
from os import system

prev_ask = ""
model = "llama2"
ask = ""

while ask != "/e":
    try: ollama.chat(model=model,messages=[{'role': 'user','content': "none"}])
    except ollama._types.ResponseError: print(f"Model '{model}' not found. Try pulling it first."); break
    system("cls")
    print(f"Model: {model}.\nType question, /r to regenerate, /e to exit or /m 'model' to switch models.\n")

    while True:
        code = []
        line_c = 0

        ask = input(">>> ")
        if ask == "":
            print("\n")
            continue
        
        if ask != "/r":
            prev_ask = ask
        else:
            ask = prev_ask
        
        if ask == "/e":
            break

        if ask.startswith("/m "):
            model = ask.split("/m ")[1]

            if model == "c":
                model = "wizardcoder"

            elif model == "m":
                model = "mistral"
                
            elif model == "l":
                model = "llama2"

            ask = ""
            break

        response = ollama.chat(model=model, messages=[
        {
            'role': 'user',
            'content': ask,
        },
        ])
        response = str(response['message']['content']).replace("`",'"').split("\n")
        for line in response:
            if '"""' in line:
                code.append(line_c)

            if len(code) == 2:
                response[code[0]] =  "\033[48;5;235m"
                response[code[1]] =  "\033[0m\n"
                code = []

            line_c += 1

        print("\n".join(response))