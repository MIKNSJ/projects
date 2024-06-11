import emoji

def main():
    userInput = input("Please enter an emoji in str format: ");

    if (userInput[1] == "1"):
        print(emoji.emojize(":1st_place_medal:"));
        return;

    if (userInput[1] == "t"):
        print(emoji.emojize(":thumbs_up:"));
        return;

    if (userInput[0] == "h"):
        print(f"hello, {emoji.emojize(":earth_asia:", language='alias')}");
        return;

    if (userInput[1] == "c"):
        print(f"{emoji.emojize(":candy:", language='alias')} or {emoji.emojize(":ice_cream:", language='alias')}?");
        return;

main();
