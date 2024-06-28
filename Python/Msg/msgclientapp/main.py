import socket
import threading
from kivy.app import App
from kivy.clock import Clock

class MsgClient(App):
    def build(self):
        return self.root

    def _connect_to_server(self, ip, port):
        self.addr = (ip, int(port))
        self.s = socket.socket()
        try: 
            self.update_chat_log(f"Attempting connection to {self.addr[0]}:{self.addr[1]}")
            self.s.connect(self.addr)
            self.update_chat_log(f"Connected to {self.addr[0]}:{self.addr[1]}")
            threading.Thread(target=self.recv).start()
        except Exception as e:
            self.reset()
            print(e)
            self.update_chat_log(f"Couldn't connect to {self.addr[0]}:{self.addr[1]} ({e})")

    def connect_to_server(self, ip, port):
        threading.Thread(target=self._connect_to_server, args=(ip, port)).start()

    def recv(self):
        try:    
            while True:
                msg = self.s.recv(1024).decode()
                self.update_chat_log(msg)
        except ConnectionAbortedError:
            self.update_chat_log(f"Connection to {self.addr[0]}:{self.addr[1]} closed")

    def _update_chat_log(self, msg):
        self.root.ids.chat_log.text += f"{msg}\n"

    def update_chat_log(self, msg):
        Clock.schedule_once(lambda dt: self._update_chat_log(msg), 0)

    def send_message(self, msg):
        if msg == "exit":
            self.reset()
            self.update_chat_log(f"Connection to {self.addr[0]}:{self.addr[1]} closed")
        
        else:
            self.update_chat_log(msg)
        self.s.send(msg.encode())
        self.root.ids.message_input.text = ''

    def _reset(self, msg, ip, port, chat):
        if msg: self.root.ids.message_input.text = ''
        if ip: self.root.ids.ip_input.text = ''
        if port: self.root.ids.port_input.text = ''
        if chat: self.root.ids.chat_log.text = ''

    def reset(self, msg=True, ip=True, port=True, chat=True):
        Clock.schedule_once(lambda dt: self._reset(msg, ip, port, chat), 0)

    def stop(self):
        self.s.close()
        super().stop()

if __name__ == '__main__':
    MsgClient().run()