def main():
    userInput = input("Please enter some text: ");
    userInput = userInput.strip();
    userInput = userInput.replace("a", "");
    userInput = userInput.replace("A", "");
    userInput = userInput.replace("e", "");
    userInput = userInput.replace("E", "");
    userInput = userInput.replace("i", "");
    userInput = userInput.replace("I", "");
    userInput = userInput.replace("o", "");
    userInput = userInput.replace("O", "");
    userInput = userInput.replace("u", "");
    userInput = userInput.replace("U", "");
    print(userInput);
    # removeVowels(userInput);

#def removeVowels(str):
#    newStr = "";
#    for i in range(len(str)):
#        if (str[i].lower() != "a" or str[i].lower() != "e" or str[i].lower() != "i"
#            or str[i].lower() != "o" or str[i].lower() != "u"):
#            newStr+=str[i];

#    print(newStr);

main();
