def main():
    userInput = input("Please enter some text: ");
    shorten(userInput);

def shorten(word):
    word = word.strip();
    word = word.replace("a", "");
    word = word.replace("A", "");
    word = word.replace("e", "");
    word = word.replace("E", "");
    word = word.replace("i", "");
    word = word.replace("I", "");
    word = word.replace("o", "");
    word = word.replace("O", "");
    word = word.replace("u", "");
    word = word.replace("U", "");
    print(word);
    return word;

if __name__ == "__main__":
    main();
