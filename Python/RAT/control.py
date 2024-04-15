import socket
from os import system

server_address = ('localhost', 5000)

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

client_socket.connect(server_address)
client_socket.settimeout(1)

def sendandrecv(message):
    client_socket.sendall(f"{message}; write-host `n".encode('utf-8'))

    try:
        while True:
            data = client_socket.recv(10240).decode('utf-8').rstrip('\n')
            return data
    except TimeoutError:
        return ""
    
def testpath(path):
    data = sendandrecv(f"cd {path}")
    if "Cannot find path" in data:
        return False
    return True

cd = sendandrecv('$PWD.Path').strip()

try:
    while True:
        message = input(f"""PS {cd.replace('"','')}> """)
        if message == "exit":
            message = "echo exit"
            break
        
        if message == "cls" or message == "clear":
            try:
                system("cls")
            except:
                system("clear")
            continue

        if message == "settimeout":
            client_socket.settimeout(int(input("Timeout> ")))
            continue
        if message.startswith("cd ") and ";" not in message:
            try:
                if message.replace('"','').replace("cd ","")[1] == ":":
                    if testpath(message.replace('"','').replace("cd ","")):
                        cd = sendandrecv(f'{message}; $PWD.Path').strip()
                    else:
                        print(f"""Path '{message.replace('"','').replace("cd ","")}' does not exist.""")
                else:
                    if testpath(cd + '\\' + message.replace('"','').replace("cd ","")):
                        cd = sendandrecv(f'''cd {cd}\{message.replace('"','').replace("cd ","")}; $PWD.Path''').strip()
                    else:
                        print(f"""Path '{cd + '/' + message.replace('"','').replace("cd ","")}' does not exist.""")
            except:
                print(f"""Path '{message.replace('"','').replace("cd ","")}' does not exist.""")
            print("\n")
        else:
            print(sendandrecv(f'cd {cd}; {message}'))

finally:
    client_socket.close()
    print("Connection closed")