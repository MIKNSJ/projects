import random
import sys

def main():

    while True:
        try:
            userInput = input("Level: ");
            if (int(userInput) > 0):
                magic = random.randint(1,int(userInput));
                break;

        except ValueError:
            pass;

    while True:
        while True:
            try:
                guess = input("Guess: ");

                if (int(guess) > 0):
                    break;

            except (ValueError, TypeError):
                pass;

        if (int(guess) > magic):
            print("Too large!");
        elif (int(guess) < magic):
            print("Too small!");
        else:
            sys.exit("Just right!")

main();
