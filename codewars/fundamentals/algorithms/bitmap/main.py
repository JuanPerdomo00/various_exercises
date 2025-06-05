#!/usr/bin/python3


def bitmap(nums):
    filter_bit = [i for i in nums if i <= 31 and i >= 0]
    # print(filter_bit)
    op = 0
    for n in filter_bit:
        bit = 1 << n
        op |= bit
        # print(bit, n)
    return format(op, "08x")


if __name__ == "__main__":
    print(bitmap([]))
    print(bitmap([0, 3, 5, 40, -2]))
    print(bitmap([0]))
    print(bitmap([0, 1]))
    print(bitmap([5]))
