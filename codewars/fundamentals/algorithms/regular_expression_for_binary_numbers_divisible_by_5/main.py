#!/usr/bin/python3

import re

PATTERN = r"^[01]+$"


def check(binary):
    if not re.match(PATTERN, binary) or int(binary, 2) % 5 != 0:
        return False
    return True


tests = [
    (False, ""),
    (False, "abc"),
    (True, "000"),
    (True, "101"),
    (True, "1010"),
    (True, "10100"),
    (True, "{:b}".format(65020)),
    (True, "{:b}".format(6039865)),
    (False, "10110101"),
    (False, "1110001"),
    (False, "{:b}".format(21)),
    (False, "{:b}".format(15392)),
    (False, "{:b}".format(23573)),
    (False, "{:b}".format(19344)),
    (False, "{:b}".format(43936)),
    (False, "{:b}".format(32977)),
    (False, "{:b}".format(328)),
    (False, "{:b}".format(5729)),
]

for exp, s in tests:
    print(f"My function: {check(s)}", f"s -> {s} exp -> {exp}")
    assert check(s) == exp
