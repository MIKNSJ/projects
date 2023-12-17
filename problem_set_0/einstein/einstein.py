def main():
    userInput = input("Please enter mass value: ");
    print(light(userInput));

def light(mass):
    return int(mass) * (300000000)**2;

main();
