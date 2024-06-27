import socket
from sys import exit
import threading

def recv(s: socket.socket):
    try:    
        while True: print(s.recv(1024).decode())
    except ConnectionAbortedError:
        print(f"Connection to {addr[0]}:{addr[1]} closed")
        exit()


addr = ("192.168.1.36", 31415)

s = socket.socket()
try: 
    s.connect(addr)
except Exception as e:
    print(e)
    exit()


print(f"Connected to {addr[0]}:{addr[1]}")

threading.Thread(target=recv, args=(s,)).start()

while True:
    msg = input("")

    if msg == "exit":
        break

    s.send(msg.encode())

s.close()