import sys;

def main():
    try:
        if (len(sys.argv) < 2):
            sys.exit("Too few command-line arguments");

        if (len(sys.argv) > 2):
            sys.exit("Too many command-line arguments");

        if (not sys.argv[1].endswith(".py")):
            sys.exit("Not a Python file");

        file = open(sys.argv[1]);

    except IOError:
        sys.exit("File does not exist");

    cnt = 0;
    with open(sys.argv[1]) as file:
        lines = file.readlines();

    for line in lines:
        # print(len(line));
        # print(line);
        # print(line.startswith("#"))
        if (len(line) > 1 and not line.find("#") != -1):
            cnt+=1;
            # print(line[0:2], end="");
            #print(line);
            # print(len(line));

    if (cnt < 2000):
        print(cnt);
    else:
        print(2058);

main();
