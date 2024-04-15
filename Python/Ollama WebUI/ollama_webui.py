import subprocess
import threading
import time

def webui():
    subprocess.call("cd C:\\Users\\lenar & cd ollama-webui-lite & pnpm i && pnpm run dev", shell=True)

threading.Thread(target=webui).start()

time.sleep(3)
subprocess.call("start http://localhost:3000/", shell=True)