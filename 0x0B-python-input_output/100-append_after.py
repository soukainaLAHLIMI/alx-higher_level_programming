#!/usr/bin/python3

def append_after(filename="", search_string="", new_string=""):

    out = ""
    with open(filename, 'r') as f:
        for line in f:
            out +=line
            if search_string in line:
                out += new_string

    with open(filename, 'w') as f:
        f.write(out)

