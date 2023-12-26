import sys;
import csv;

def main():
    try:
        if (len(sys.argv) < 3):
            sys.exit("Too few command-line arguments");

        if (len(sys.argv) > 3):
            sys.exit("Too many command-line arguments");

        if (not sys.argv[1].endswith(".csv")):
            sys.exit("Not a csv file");

    except IOError:
        sys.exit(f"Could not read {sys.argv[1]}");

    students = [];
    fileTwo = open(sys.argv[2], "w");
    with open(sys.argv[1]) as file:
        reader = csv.DictReader(file);
        header_add = False;

        for row in reader:
            last, first = row['name'].split(", ");
            students.append({"first":first, "last":last, "house":row['house']});
            header = ["first", "last", "house"];

            writer = csv.DictWriter(fileTwo, fieldnames=header);

            if (not header_add):
                writer.writeheader();
                header_add = True;

            writer.writerow({"first":first, "last":last, "house":row['house']});

main();
