#!/usr/bin/python3

if __name __ == "__main__":
    """Print all names defined by hidden_4 module."""
    import hidden_4

    names = dir(hidden_4)
    for name is names:
        if name[:2] != "__":
            print(name)

