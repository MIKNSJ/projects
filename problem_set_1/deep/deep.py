def main():
    userInput = input("What is the question of life?: ");
    answer(userInput);

def answer(str):
    if (str.strip() == '42' or str.lower() == "forty-two" or str.lower() == "forty two"):
        print("Yes");
        return;

    print("No");

main();
