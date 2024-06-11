import string

def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    checkMidNum = True;
    numCount = 0;
    checkFirstNumber = False;

    totalCharCount = 0;
    startCharCount = 0;
    for i in range(len(s)):
        if (string.punctuation.find(s[i]) != -1):
            #print("Fail to meet no punctuation requirement.");
            return False;

        if (i > 2 and startCharCount < 2):
            #print("Fail to meet at least two starting character requirement.");
            return False;

        if (s[i].isnumeric() and not checkFirstNumber):
            if (s[i] == "0"):
                return False;

            else:
                checkFirstNumber = True;

        if (s[i].isalpha() or s[i].isnumeric()):
            totalCharCount+=1;

        if (s[i].isalpha() and i < 3):
            startCharCount+=1;

        if (s[i].isnumeric() and checkMidNum):
            checkMidNum = True;
            numCount+=1;
            #print("pass");

        if (s[i].isalpha() and numCount > 0):
            checkMidNum = False;
            #print("fail");

    if (startCharCount < 2):
        #print("Fail to meet at least two starting character requirement.");
        return False;

    if (totalCharCount < 2 or totalCharCount > 6):
        #print("Fail to meet at least two and most six character requirement.");
        return False;

    if (not checkMidNum):
        #print("Failed to meet trailing numbers requirement.");
        return False;

    #print(totalCharCount);

    return True;

main();
