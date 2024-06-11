def main():
    months = {
        "January": 1,
        "February": 2,
        "March": 3,
        "April": 4,
        "May": 5,
        "June": 6,
        "July": 7,
        "August": 8,
        "September": 9,
        "October": 10,
        "November": 11,
        "December": 12
    }

    while True:
        userInput = input("Please enter a date: ").strip();

        if (userInput.find("/") != -1):
            if (slashFormat(userInput) != "invalid"):
                print(slashFormat(userInput));
                break;

        if (userInput.find(",") != -1):
            if (defaultFormat(userInput, months) != "invalid"):
                print(defaultFormat(userInput, months));
                break;



def slashFormat(userInput):
    slashOne = userInput.find("/");
    slashTwo = userInput.rfind("/");
    month = userInput[0: slashOne];
    day = userInput[slashOne + 1: slashTwo];
    year = userInput[slashTwo + 1: len(userInput)];

    if (len(month) > 2 or int(month) < 1 or int(month) > 12 or int(day) < 0 or int(day) > 31):
        return "invalid";

    if (int(month) < 10):
        month = "0" + month;

    if (int(day) < 10):
        day = "0" + day;

    return f"{year}-{month}-{day}";



def defaultFormat(userInput, d_months):
    spaceOne = userInput.find(" ");
    comma = userInput.find(",");
    spaceTwo = userInput.rfind(" ");
    month = userInput[0: spaceOne];
    day = userInput[spaceOne + 1: comma];
    year = userInput[spaceTwo + 1: len(userInput)];

    if (d_months.get(month, "null") == "null"):
        return "invalid";

    else:
        month = str(d_months.get(month));

    if (int(month) < 1 or int(month) > 12 or int(day) < 0 or int(day) > 31):
        return "invalid";

    if (int(month) < 10):
        month = "0" + month;

    if (int(day) < 10):
        day = "0" + day;

    return f"{year}-{month}-{day}";

main();
