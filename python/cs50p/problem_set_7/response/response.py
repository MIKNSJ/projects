from validator_collection import checkers

def main():
    print(check_email(input("Email: ")));

def check_email(str):
    result = checkers.is_email(str);
    if result:
        return "Valid";

    return "Invalid";

if __name__ == "__main__":
    main()
