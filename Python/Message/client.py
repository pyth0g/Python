import socket
import threading
import configparser
import os.path

HEADER = 64
PORT = 6060
FORMAT = "utf-8"
DISCONNECT_MESSAGE = "!EXIT"
SERVER = "0.0.0.0"
ADDR = (SERVER, PORT)

config = configparser.ConfigParser()

if os.path.exists(r"./config.ini") == False:
    config.add_section("client")
    config.set("client","ip","0.0.0.0")
    config.set("client","username","not set")

    with open(r"./config.ini", 'w') as configfile:
        config.write(configfile)

config.read(r"./config.ini")

SERVER = ["client"],["ip"]

username = ["client"],["username"]

if username == "not set":
    username = input("Enter your username: ")

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(ADDR)

def send(msg):
    message = f"{username}: {msg}".encode(FORMAT)
    msg_length = len(message)
    send_length = str(msg_length).encode()
    send_length += b" " * (HEADER - len(send_length))
    client.send(send_length)
    client.send(message)

def receive():
    while True:
        try:
            message_length = client.recv(HEADER).decode(FORMAT)
            if not message_length:
                print("Server disconnected.")
                break

            message_length = int(message_length)
            message = client.recv(message_length).decode(FORMAT)
            print("\n" + message)
            print("Me: ", end="", flush=True)

        except ConnectionResetError:
            print("Server disconnected.")
            break

def input_loop():
    while True:
        message = input("Me: ")
        if message.upper() == DISCONNECT_MESSAGE:
            send(DISCONNECT_MESSAGE)
            break
        send(message)


receive_thread = threading.Thread(target=receive)
receive_thread.start()

input_thread = threading.Thread(target=input_loop)
input_thread.start()

receive_thread.join()
input_thread.join()

client.close()