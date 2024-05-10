import pyautogui
import time

class UControl:
    def __init__(self) -> None:
        self.def_delay = 0

    _delay = lambda self: time.sleep(self.def_delay / 1000)

    def delay(self, value: int) -> None:
        """
        Delay program for 'value' in ms.
        """

        if not isinstance(value, int):
            print(f"Invalid 'value' type for delay. Expected 'int' got '{type(value).__name__}'.")
            return 1
        
        time.sleep(value / 1000)

    def write(self, *values: str, sep: str | None = " ") -> None:
        """
        Set values to what you want to write.\n
        Set sep to what you want the separator between values to be.
        """

        pyautogui.write(str(sep).join(values))

        self._delay()

    def open(self, path: str, sleep: float | None = 1) -> None:
        """
        Set path to the path to open a program (you can test it by running 'win + r' and typing the path in).\n
        Set sleep to the time it takes for the program to open (better to overshoot a bit as opposed to undershoot).
        """

        if not isinstance(sleep, float) and not isinstance(sleep, int):
            print(f"Invalid 'sleep' type for open. Expected 'int' or 'float' got '{type(sleep).__name__}'.")
            return 1

        pyautogui.hotkey("WIN","r")
        pyautogui.write(str(path))
        pyautogui.press("ENTER")
        time.sleep(sleep)

        self._delay()

    def run(self, command: str, cnsl: str | None = "powershell", switch: str | None = "-c") -> None:
        """
        Set command to the command you want to run.\n
        Set cnsl to the program you wish to run the command in (default powershell).\n
        Set switch to the switch that is used to supply args or commands to the program (default -c).
        """
        self.open(f'{cnsl} {switch} "{command}"')

    def press(self, *values: str) -> None:
        pyautogui.hotkey(values)

    def move(self, x: int, y: int, duration: int, relative: bool | None = False, click: str | None = None) -> None:
        """
        Set x to the x coordinate or (if relative is True) x offset.\n
        Set y to the y coordinate or (if relative is True) y offset.\n
        Set relative to True if you want to move relative to current position or False if not.\n
        Set click to 'rclick' for right click, 'lclick' for left click or 'mclick' for middle click.
        """

        if not isinstance(x, int):
            print(f"Invalid 'x' type for move. Expected 'int' got '{type(x).__name__}'.")
            return 1

        if not isinstance(y, int):
            print(f"Invalid 'y' type for move. Expected 'int' got '{type(y).__name__}'.")
            return 1

        if not isinstance(duration, int):
            print(f"Invalid 'duration' type for move. Expected 'int' got '{type(duration).__name__}'.")
            return 1
        
        if click:
            if click != "lclick" and click != "rclick" and click != "mclick":
                print(f"Expected 'lclick', 'rclick' or 'mclick' for 'click', but got '{click}'.")
                return 1

        
        if relative:
            pyautogui.moveRel(x, y, duration)

        else:
            pyautogui.moveTo(x, y, duration)

        if click:
            if click == "lclick":
                pyautogui.leftClick()
            
            if click == "rclick":
                pyautogui.rightClick()

            if click == "mclick":
                pyautogui.middleClick()