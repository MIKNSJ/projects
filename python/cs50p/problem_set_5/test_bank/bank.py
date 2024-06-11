def main():
    userInput = input("Enter a greeting: ");
    value(userInput);

def value(greeting):
    greeting = greeting.lower();
    if (greeting.find("hello") != -1):
        print("$0");
        return 0;

    elif (greeting.find("h") == 0):
        print("$20");
        return 20;

    else:
        print("$100");
        return 100;

if __name__ == "__main__":
    main();
