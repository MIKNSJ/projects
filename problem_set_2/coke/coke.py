def main():
    dispenser();

def dispenser():
    cost = 50;
    while (cost > 0):
        money = int(input("Please enter an amount (5, 10, 25) only: "));

        if (money == 5 or money == 10 or money == 25):
            cost-=money;
            print("Amount Due: " + str(cost));

        else:
            print("Your money has not been accepted. Amount Due: " + str(cost));

    print("Change Owed: " + str(cost * (-1)));

main();
