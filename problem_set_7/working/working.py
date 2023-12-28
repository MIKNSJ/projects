import re
import sys


def main():
    print(convert(input("Hours: ")))


def convert(s):
    if (s.find("to") == -1):
        raise ValueError();

    parts = [];
    unit = re.search(r"([^ ]+) ([^ ]+) ([^ ]+) ([^ ]+) ([^ ]+)", s, re.IGNORECASE);
    if unit:
        for i in range(1,6):
            # print(f"GROUP: {unit.group(i)}");
            parts.append(unit.group(i));

        if (len(parts[0]) <= 2):
            newHour = parts[0];
            newHourTwo = parts[3];

            if (int(newHour) == 12):
                newHour = "0";

            if (int(newHourTwo) == 12):
                newHourTwo = "0";

            if (parts[1].lower() == "pm"):
                newHour = str(int(newHour) + 12);

            if (parts[4].lower() == "pm"):
                newHourTwo = str(int(newHourTwo) + 12);

            if (int(newHour) < 10):
                newHour = "0" + newHour;

            if (int(newHourTwo) < 10):
                newHourTwo = "0" + newHourTwo;

            return f"{newHour}:00 to {newHourTwo}:00";

        else:
            newHour, minOne = parts[0].split(":");
            newHourTwo, minTwo = parts[3].split(":");

            if (int(newHour) == 12):
                newHour = "0";

            if (int(newHourTwo) == 12):
                newHourTwo = "0";

            if (int(minOne) >= 60 or int(minTwo) >= 60):
                raise ValueError();

            if (parts[1].lower() == "pm"):
                newHour = str(int(newHour) + 12);

            if (parts[4].lower() == "pm"):
                newHourTwo = str(int(newHourTwo) + 12);

            if (int(newHour) < 10):
                newHour = "0" + newHour;

            if (int(newHourTwo) < 10):
                newHourTwo = "0" + newHourTwo;

            return f"{newHour}:{minOne} to {newHourTwo}:{minTwo}";

    else:
        raise ValueError();


    return "00:00";

if __name__ == "__main__":
    main()
