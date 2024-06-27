<<<<<<< HEAD
import duckypy

control = duckypy.UControl()

control.run('curl -L "https://raw.githubusercontent.com/pyth0g/pyth0g.github.io/main/test/test.html" -o C:\\Users\\%USERNAME%\\Desktop\\test.html', cnsl = "cmd", switch = "/c")
control.run('curl -L "https://raw.githubusercontent.com/pyth0g/pyth0g.github.io/main/test/test.png" -o C:\\Users\\%USERNAME%\\Desktop\\test.png', cnsl = "cmd", switch = "/c")
=======
import duckypy

control = duckypy.UControl()

control.run('curl -L "https://raw.githubusercontent.com/pyth0g/pyth0g.github.io/main/test/test.html" -o C:\\Users\\%USERNAME%\\Desktop\\test.html', cnsl = "cmd", switch = "/c")
control.run('curl -L "https://raw.githubusercontent.com/pyth0g/pyth0g.github.io/main/test/test.png" -o C:\\Users\\%USERNAME%\\Desktop\\test.png', cnsl = "cmd", switch = "/c")
>>>>>>> 357ee29c635c1a5203fd5eab1c01ce31669483b8
control.run('start "C:\\Users\\%USERNAME%\\Desktop\\test.html"')