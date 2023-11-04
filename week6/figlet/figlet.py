from pyfiglet import Figlet
import sys
import random

figlet = Figlet()
choice = ""

if len(sys.argv) == 1:
    choice = random.choice(figlet.getFonts())
elif len(sys.argv) == 3:
    if sys.argv[1] == "-f" or sys.argv[1] == "--font":
        choice = sys.argv[2]
    else:
        sys.exit("Second command-line argument is not valid")
else:
    sys.exit("Expects zero or two command-line arguments")

figlet.setFont(font=choice)

userInput = input("Input: ")
print(figlet.renderText(userInput))
