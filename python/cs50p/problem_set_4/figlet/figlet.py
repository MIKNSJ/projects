import sys;
from pyfiglet import Figlet

def main():
    if (len(sys.argv) < 3 or sys.argv[1] != "-f"):
        sys.exit("Invalid usage");

    userInput = input("Enter: ");
    f = Figlet(font=sys.argv[2]);
    print(f.renderText(userInput));

main();
