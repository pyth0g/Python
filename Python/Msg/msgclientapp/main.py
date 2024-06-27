import socket
import threading
from kivy.app import App
from kivy.clock import Clock

class MsgClient(App):
    def build(self):
        return self.root

    def connect_to_server(self, ip, port):
        self.addr = (ip, int(port))
        self.s = socket.socket()
        try: 
            self.s.connect(self.addr)
        except Exception as e:
            print(e)

        self.update_chat_log(f"Connected to {self.addr[0]}:{self.addr[1]}")
        threading.Thread(target=self.recv).start()

    def recv(self):
        try:    
            while True:
                msg = self.s.recv(1024).decode()
                Clock.schedule_once(lambda dt: self.update_chat_log(msg), 0)
        except ConnectionAbortedError:
            self.update_chat_log(f"Connection to {self.addr[0]}:{self.addr[1]} closed")

    def update_chat_log(self, msg):
        self.root.ids.chat_log.text += f"{msg}\n"

    def send_message(self, msg):
        if msg == "exit":
            self.update_chat_log(f"Connection to {self.addr[0]}:{self.addr[1]} closed")
        
        self.s.send(msg.encode())
        if msg != "exit": self.update_chat_log(msg)
        self.root.ids.message_input.text = ''

    def stop(self):
        self.s.close()
        super().stop()

if __name__ == '__main__':
    MsgClient().run()