import socket
import threading

HEADER = 64
PORT = 6060
SERVER = socket.gethostbyname(socket.gethostname())
ADDR = (SERVER, PORT)
FORMAT = "utf-8"
DISCONNECT_MESSAGE = "!EXIT"

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind(ADDR)

connected_clients = []
connected_clients_lock = threading.Lock()

def broadcast_message(sender, message):
    with connected_clients_lock:
        for client in connected_clients:
            if client != sender:
                try:
                    message_header = str(len(message)).encode(FORMAT)
                    message_header += b" " * (HEADER - len(message_header))
                    client.send(message_header)
                    client.send(message.encode(FORMAT))
                except:
                    connected_clients.remove(client)

def handle_client(client_socket, addr):
    print(f"[NEW CONNECTION] {addr} connected.")
    with connected_clients_lock:
        connected_clients.append(client_socket)

    try:
        while True:
            msg_length = client_socket.recv(HEADER).decode(FORMAT)
            if not msg_length:
                break
            msg_length = int(msg_length)
            msg = client_socket.recv(msg_length).decode(FORMAT)
            if msg == DISCONNECT_MESSAGE:
                break

            print(f"{addr} > {msg}")

            broadcast_message(client_socket, f"{msg}")

    except ConnectionResetError:
        print(f"Connection with {addr} was reset.")
    except OSError as e:
        if e.errno == 10038:
            print(f"Connection with {addr} was forcibly closed.")
    finally:
        print(f"{addr} disconnected.")
        with connected_clients_lock:
            if client_socket in connected_clients:
                connected_clients.remove(client_socket)
        client_socket.close()

def start():
    server.listen()
    print(f"[LISTENING] Server is listening on {SERVER}")
    while True:
        conn, addr = server.accept()
        thread = threading.Thread(target=handle_client, args=(conn, addr))
        thread.start()

print("[STARTING] Server is starting...")
start()
input()