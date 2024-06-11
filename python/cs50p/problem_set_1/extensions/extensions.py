def main():
    userInput = input("Please enter the path of your file: ");
    userInput = userInput.strip();
    type = findType(userInput);
    name = fileName(userInput);
    checkType(name, type);

def fileName(str):
    dot = str.find(".");
    fileName = str[0: dot];
    fileName = fileName.lower();
    return fileName;

def findType(str):
    dot = str.rfind(".");
    fileType = str[dot + 1: len(str)];
    fileType = fileType.lower();
    return fileType;

def checkType(fileName, fileType):
    match fileType:
        case "gif":
            print("image/gif");
        case "png":
            print("image/png");
        case "jpeg":
            print("image/jpeg");
        case "jpg":
            print("image/jpeg");
        case "gif":
            print("image/gif");
        case "pdf":
            print("application/pdf");
        case "txt":
            print("text/" + fileName);
        case "zip":
            print("application/zip");
        case _:
            print("application/octet-stream");

main();
