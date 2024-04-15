import notify
import os
import sys

icon_filename = "Windows-defender.ico"
if hasattr(sys, '_MEIPASS'):
    icon_path = os.path.join(sys._MEIPASS, icon_filename)
else:
    icon_path = None

notify.notify(icon_path)