import os

class CustomCMD:
    def __init__(self):
        self.commands = []
        self.last_command_had_output = False

    def run(self):
        while True:
            user_input = input("> ")
            if user_input.lower() == "exit":
                break
            elif user_input.lower() == "history":
                self.print_history()
            else:
                self.execute_command(user_input)

    def execute_command(self, command):
        try:
            output = os.popen(command).read().replace('\n', ' ')
            if command.strip():
                self.commands.append((command, output.strip()))
                if output.strip():
                    print(output)
                    self.last_command_had_output = True
                else:
                    self.last_command_had_output = False
        except Exception as e:
            self.commands.append((command, f"Error: {e}"))
            self.last_command_had_output = False

    def print_history(self):
        for command, output in self.commands:
            if output:
                print(f"> {command}\n{output}")
                self.last_command_had_output = True
            else:
                if self.last_command_had_output:
                    print(f"> {command}")
                    self.last_command_had_output = False
                else:
                    print(f">{command}")

if __name__ == "__main__":
    cmd = CustomCMD()
    cmd.run()