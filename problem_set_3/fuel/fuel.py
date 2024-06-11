def main():
    while True:
        userInput = input("Please enter the fuel amount as a fraction: ");
        userInput = userInput.strip();
        slashIdx = userInput.find("/");
        try:
            x = int(userInput[0:slashIdx]);
            y = int(userInput[slashIdx+1:len(userInput)]);
            level = x / y;

        except (ValueError, ZeroDivisionError):
            pass;

        else:
            if (x <= y):
                break;

    checkFuel(x, y, level);

def checkFuel(currX, currY, level):
    z = float(currX / currY);
    z = z * 100;
    z = round(z);

    if (level >= 0.99):
        print("F");

    elif (level <= 0.01):
        print("E");

    else:
        print(f"{z}%");

main();
