def main():
    menu = {
        "baja taco": 4.25,
        "burrito": 7.50,
        "bowl": 8.50,
        "nachos": 11.00,
        "quesadilla": 8.50,
        "super burrito": 8.50,
        "super quesadilla": 9.50,
        "taco": 3.00,
        "tortilla salad": 8.00
    }

    cost = 0.00;
    while True:
        try:
            food = input("Item: ").strip().lower();

        except EOFError:
            break;

        if (food in menu):
            cost+=menu[food];
            print(f"Total: ${format(cost, ".2f")}");

main();
