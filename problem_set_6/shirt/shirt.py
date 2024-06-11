import sys;
import csv;
from PIL import Image, ImageOps;

def main():
    try:
        if (len(sys.argv) < 3):
            sys.exit("Too few command-line arguments");

        if (len(sys.argv) > 3):
            sys.exit("Too many command-line arguments");

        file = sys.argv[1].lower();
        dot_idx = sys.argv[1].rfind(".");
        fileTwo = sys.argv[2].lower();
        dot_idx_two = sys.argv[2].rfind(".");
        fileType = file[dot_idx+1:len(sys.argv[1])]
        fileTypeTwo = fileTwo[dot_idx_two+1:len(sys.argv[2])]

        if (not file.endswith(".png")):
            if (not file.endswith(".jpg")):
                if (not file.endswith(".jpeg")):
                    sys.exit("Not a valid image file");

        if (not fileTwo.endswith(".png")):
            if (not fileTwo.endswith(".jpg")):
                if (not fileTwo.endswith(".jpeg")):
                    sys.exit("Not a valid image file");

        if (fileType != fileTypeTwo):
            sys.exit("Input and output have different extensions");

    except IOError:
        sys.exit("Input does not exist");


    back_image = Image.open(sys.argv[1]);
    shirt = Image.open("shirt.png");
    size = shirt.size;
    back_image_re = ImageOps.fit(back_image, size);
    shirt_re = ImageOps.fit(shirt, size);
    back_image_re.paste(shirt_re, shirt_re);
    back_image_re.save(f"{sys.argv[2]}");


main();
