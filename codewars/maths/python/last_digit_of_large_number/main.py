#!/usr/bin/python3


def last_digit(n1, n2):
    if n2 == 0:
        return 1
    last_n1 = n1 % 10
    if last_n1 == 0:
        return 0
    exponent = n2 % 4 if n2 % 4 != 0 else 4
    return (last_n1**exponent) % 10




if __name__ == "__main__":
    print(last_digit(4, 1))  # returns 4
    print(last_digit(4, 2))  # returns 6
    print(last_digit(9, 7))  # returns 9
    print(last_digit(10, 10**10))  # returns 0
    print(last_digit(2**200, 2**300))  # returns 6
