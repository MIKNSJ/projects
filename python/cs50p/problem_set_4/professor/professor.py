import random


def main():
    print(f"Score: {generate_integer(get_level())}");


def get_level():
    while True:
        try:
            num = input("Level: ");
            if (int(num) > 0 and int(num) < 4):
                break;

        except ValueError:
            pass;

    return num;


def generate_integer(level):
    score = 0;
    problems = 0;
    lives = "EEE";
    lives_cnt = 3;

    while (problems < 10):
            if (int(level) == 1):
                x = random.randint(0,9);
                y = random.randint(0,9);

            elif (int(level) == 2):
                x = random.randint(10,99);
                y = random.randint(10,99);

            else:
                x = random.randint(100,999);
                y = random.randint(100,999);

            while (True):
                try:
                    userInput = input(f"{x} + {y} = ");

                    if (int(userInput) != int(x) + int(y)):
                        # lives = lives[0:lives_cnt];
                        print(lives);
                        lives_cnt-=1;

                    else:
                        score+=1;
                        break;

                    if (lives_cnt == 0):
                        print(f"{x} + {y} = {int(x) + int(y)}")
                        break;

                except (ValueError):
                    print(lives);
                    pass;

            problems+=1;

    return score;

if __name__ == "__main__":
    main()
