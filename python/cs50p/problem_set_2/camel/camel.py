def main():
    userInput = input("Please enter your text: ")
    userInput = userInput.strip();
    customReplace(userInput);

def customReplace(userInput):
    snake = "";
    char = "";
    for i in range(len(userInput)):
        if (userInput[i].isupper()):
            char = "_" + userInput[i].lower();
            snake.replace(userInput[i], "");
            snake+=char;
            # print(snake);
            # print("true");
        else:
            snake+=userInput[i];
            # print(snake);

    print(snake);

main();
