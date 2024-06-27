import socket
import time
import threading
from kivy.app import App
from kivy.clock import Clock

conns = []
info = lambda msg: f"{time.strftime('[%H:%M:%S]')} {msg}"

class MsgServer(App):
    def build(self):
        return self.root

    def _update_log(self, msg):
        self.root.ids.log.text += f"{msg}\n"

    def update_log(self, msg):
        Clock.schedule_once(lambda dt: self._update_log(msg), 0)

    def accept_conn(self, s: socket.socket, info):
        c, addr = s.accept()
        conns.append(c)
        self.update_log(info(f"Connection from {addr[0]}:{addr[1]}"))
                    
        while True:
            try:
                data = c.recv(1024)
            except ConnectionResetError:
                self.update_log(info(f"Connection from {addr[0]}:{addr[1]} closed"))
                conns.remove(c)
                break

            if data.decode() == "exit":
                self.update_log(info(f"Connection from {addr[0]}:{addr[1]} closed"))
                conns.remove(c)
                c.close()
                break

            self.update_log(info(f"{addr[0]}:{addr[1]} > {data.decode()}"))
            for i in conns:
                if i != c:
                    i.send(info(f"{addr[0]}:{addr[1]} > {data.decode()}").encode())
        

    def _start_server(self, ip: str, port: int):
        try:
            s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            
            server_address = (str(ip), int(port))

            self.update_log(info("Starting..."))
            s.bind(server_address)
            self.update_log(info(f"Started server on {ip}:{port}"))
    
            s.listen(5)
            
            while True:
                t = threading.Thread(target=self.accept_conn, args=(s, info))
                t.start()
                time.sleep(0.5)

        except Exception as e:
            self.update_log(info(f"An error occurred: {e}"))
        
        finally:
            s.close()
            self.update_log(info("Server closed"))

    def start_server(self, ip: str, port: int):
        threading.Thread(target=self._start_server, args=(ip, port)).start()

if __name__ == "__main__":
    MsgServer().run()