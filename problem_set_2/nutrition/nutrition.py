def main():
    userInput = input("Please enter a fruit: ");
    userInput = userInput.strip().lower();
    fact(userInput);

def fact(str):
    match str:
        case "apple":
            print("Calories: 130");
        case "banana":
            print("Calories: 110");
        case "grapefruit":
            print("Calories: 60");
        case "honeydew":
            print("Calories: 50");
        case "lemon":
            print("Calories: 15");
        case "peach":
            print("Calories: 60");
        case "pineapple":
            print("Calories: 50");
        case "nectarine":
            print("Calories: 60");
        case "strawberries":
            print("Calories: 50");
        case "tangerine":
            print("Calories: 50");
        case "avocado":
            print("Calories: 50");
        case "kiwifruit":
            print("Calories: 90");
        case "pear":
            print("Calories: 100");
        case "sweet cherries":
            print("Calories: 100");

main();
