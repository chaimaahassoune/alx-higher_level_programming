#!/usr/bin/python3

toggle = 0
for c in range(ord('z'), ord('a') - 1, -1):
    print("{}".format(chr(c - toggle)), end="")
    toggle = 32 if toggle == 0 else 0
