#!/usr/bin/python3

if__name__ == "__main__":
    """Print the additin of all arguments."""
    import sys
    total = 0
    for i in range(len(sys.argv)- 1):
        total += int(sys.argv[i + 1])
    print("{}".format(total))
