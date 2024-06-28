import socket
import time
from sys import exit
import threading

conns = []

def accept_conn(s: socket.socket, info):
    c, addr = s.accept()
    conns.append(c)
    print(info(f"Connection from {addr[0]}:{addr[1]}"))
                
    while True:
        try:
            data = c.recv(1024)
        except ConnectionResetError:
            print(info(f"Connection from {addr[0]}:{addr[1]} closed"))
            conns.remove(c)
            break

        if data.decode() == "exit":
            print(info(f"Connection from {addr[0]}:{addr[1]} closed"))
            conns.remove(c)
            c.close()
            break

        print(info(f"{addr[0]}:{addr[1]} > {data.decode()}"))
        for i in conns:
            if i != c:
                i.send(info(f"{addr[0]}:{addr[1]} > {data.decode()}").encode())
    

def start_server():
    try:
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        
        server_address = (input("ip: "), int(input("port: ")))
        info = lambda msg: f"{time.strftime('[%H:%M:%S]')} {msg}"

        print(info("Starting..."))
        s.bind(server_address)
        print(info(f"Started server on {server_address[0]}:{server_address[1]}"))
   
        s.listen(5)
        
        while True:
            t = threading.Thread(target=accept_conn, args=(s, info))
            t.start()
            time.sleep(0.5)

    except Exception as e:
        print(info(f"An error occurred: {e}"))
    
    finally:
        s.close()
        print(info("Server closed"))

if __name__ == "__main__":
    try:
        start_server()
    except Exception as e:
        exit()