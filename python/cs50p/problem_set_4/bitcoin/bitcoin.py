import json
import requests
import sys

def main():

    try:
        if (len(sys.argv) < 2):
            sys.exit("Missing command-line argument");

        n_coins = float(sys.argv[1]);

    except (ValueError):
        sys.exit("Command-line argument is not a number")

    response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json");

    o = response.json();
    # print(json.dumps(o, indent=2));
    b_coin = o["bpi"]["USD"]["rate_float"];
    cost = n_coins * b_coin;
    cost = round(cost, 4);

    cost_str = str(cost);
    dot_idx = cost_str.find(".");
    result = "";
    j = 0;
    # print(f"dot_idx is {dot_idx}");
    for i in range(len(cost_str) - 1, -1, -1):
        # print(f"i is {i}");
        if (j == 3 and i < dot_idx):
            # print("in");
            result = "," + result;
            j = 0;

        result = cost_str[i] + result;

        if (i < dot_idx):
            j+=1;

        #print(f"j is {j}");

    print(f"${result}");

main();
