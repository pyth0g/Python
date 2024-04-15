import subprocess
import threading
import time

def read_output():
    while True:
        line = p.stdout.readline()
        if not line:
            break
        if "Ncat:" not in line:
            start_input_event.set()
        print(line.strip())

def send_input():
    while True:
        start_input_event.wait()  # Wait for the signal to start receiving input
        command = input("> ")
        if command == "end":
            break
        p.stdin.write(command.encode("utf-8") + b"\n")
        p.stdin.flush()

PORT = 5000
p = subprocess.Popen(f"ncat -lvnp {PORT}", stdout=subprocess.PIPE, stderr=subprocess.STDOUT, stdin=subprocess.PIPE, shell=True, bufsize=1, universal_newlines=True)

start_input_event = threading.Event()

output_thread = threading.Thread(target=read_output)
input_thread = threading.Thread(target=send_input)

output_thread.start()

# Wait briefly to allow the ncat process to start
time.sleep(1)

input_thread.start()

# Wait for the input thread to finish
input_thread.join()

# Ensure the subprocess is terminated gracefully
p.terminate()
p.wait()