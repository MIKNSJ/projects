import inflect
import sys;
from datetime import date


def main():
    birthDate_str = input("Enter birth-date: ");
    print(age(birthDate_str));


def age(str):
    try:
        birthDate = date.fromisoformat(str);

    except ValueError:
        sys.exit("Invalid date");

    ie = inflect.engine();
    todayDate = date.today();
    diffDate = todayDate - birthDate;
    minutes = diffDate.days * 24 * 60;
    return f"{ie.number_to_words(minutes, andword=" ").capitalize()} minutes";


if __name__ == "__main__":
    main()
