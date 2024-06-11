from tabulate import tabulate
import sys;
import csv;

def main():
    try:
        if (len(sys.argv) < 2):
            sys.exit("Too few command-line arguments");

        if (len(sys.argv) > 2):
            sys.exit("Too many command-line arguments");

        if (not sys.argv[1].endswith(".csv")):
            sys.exit("Not a Python file");

        file = open(sys.argv[1]);

    except IOError:
        sys.exit("File does not exist");

    menu = [];
    with open(sys.argv[1]) as file:
        #for line in file:
            #Pizza, Small, Large = line.rstrip().split(",");
            #row = {"Silican Pizza": Pizza, "Small": Small, "Large": Large};
            #menu.append(row);
        reader = csv.DictReader(file);
        for row in reader:
            menu.append(row);

    #for item in menu:
        #print(f"{item['Pizza']} {item['Small']} {item['Large']}");
    #{"Silican Pizza", "Small", "Large"}
    print(tabulate(menu, headers="keys", tablefmt="grid"));

main();
