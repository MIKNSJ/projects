def main():
    userInput = input("Please enter some text: ");
    return userInput;

def convert(str):
    str = str.replace(":)", "\U0001F642");
    str = str.replace(":(", "\U0001F641");
    return str;


userInput = main();
output = convert(userInput);
print(output);
