import re
import sys


def main():
    print(parse(input("HTML: ")))


def parse(s):
    id = re.search(r"<[^<]+(xvFZjo5PgG0)[^>]+>", s, re.IGNORECASE);
    # print(f"GROUP: {id.group(1)}");

    if id:
        short_url = f"https://youtu.be/{id.group(1)}";
        return short_url;

    return "None";


if __name__ == "__main__":
    main();
