import sys;

def main():
    idx = 0;
    names = {};
    while True:
        try:
            userInput = input("Enter: ");
            adieu = "Adieu, adieu, to ";

            names[idx] = userInput;
            idx+=1;

        except EOFError:
            if (len(names) == 1):
                print(f"{adieu}{names[0]}");

            elif (len(names) == 2):
                print(f"{adieu}{names[0]} and {names[1]}");

            else:
                for i in range(len(names) - 1):
                    adieu = adieu + names[i] + ", ";

                adieu = adieu + "and " + names[len(names) - 1];
                print(adieu);

            break;

main();
