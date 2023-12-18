def main():
    userInput = input("Enter a time: ");
    # convert(userInput);
    status(userInput);


def convert(time):
    semi = time.find(":");
    hours = int(time[0:semi]);
    min = int(time[semi+1:len(time)]);
    min = float(min / 60);
    hours = float(hours + min);
    print(hours);

def status(time):
    time = int(time.replace(":", ""));

    if (700 <= time <= 800):
        print("breakfast time");

    elif (1200 <= time <= 1300):
        print("lunch time");

    elif (1800 <= time <= 1900):
        print("dinner time");

    else:
        return;

if __name__ == "__main__":
    main();
