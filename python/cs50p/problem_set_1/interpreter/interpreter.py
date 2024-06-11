def main():
    userInput = input("Enter an expression: ");
    # userInput = userInput.replace(" ", "");
    dot1 = userInput.find(" ");
    dot2 = userInput.rfind(" ");
    x = int(userInput[0:dot1]);
    y = userInput[dot1+1];
    z = int(userInput[dot2+1:len(userInput)]);
    calc(x,y,z);

def calc(num1, op, num2):
    match op:
        case "+":
            num3 = float(num1 + num2);
            print(num3);
        case "-":
            num3 = float(num1 - num2);
            print(num3);
        case "*":
            num3 = float(num1 * num2);
            print(num3);
        case "/":
            num3 = float(num1 / num2);
            print(num3);

main();
