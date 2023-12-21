def main():
    cart = {}

    while True:
        try:
            item = input().strip().upper();

        except EOFError:
            sCart = dict(sorted(cart.items()));
            printItems(sCart);
            break;

        if (item in cart):
            cart.update({item: cart.get(item) + 1});

        else:
            cart.update({item: 1});

def printItems(cart):
    for item in cart:
        print(f"{cart.get(item)} {item}");

main();
