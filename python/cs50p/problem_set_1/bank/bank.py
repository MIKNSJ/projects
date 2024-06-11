def main():
    userInput = input("Enter a greeting: ");
    teller(userInput);

def teller(str):
    if (str.strip().lower().find("hello") != -1):
        print("$0");

    elif (str.strip().lower().find("h") == 0):
        print("$20");

    else:
        print("$100");

main();
