#!/usr/bin/python3
def uppercase(string):
    for char in string:
        ascii_val = ord(char)
        if ord('a') <= ascii_val <= ord('z'):
            uppercase_char = chr(ascii_val - 32)
        else:
            uppercase_char = char
        print("{}".format(uppercase_char), end="")
    print()
