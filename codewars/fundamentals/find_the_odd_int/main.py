#!/usr/bin/python3


def find_it(seq):
    if len(seq) == 1:
        return seq[0]
    mem = {}

    for i in seq:
        if i not in mem:
            mem[i] = 1
        else:
            mem[i] += 1

    for a, b in mem.items():
        if b % 2 != 0:
            return a
        else:
            continue


if __name__ == "__main__":
    assert find_it([7]) == 7
    print(find_it([7]))
    assert find_it([0]) == 0
    print(find_it([0]))
    # assert find_it([1, 1, 2]) == 2
    print(find_it([1, 1, 2]))
    # assert find_it([0, 1, 0, 1, 0]) == 0
    print(find_it([0, 1, 0, 1, 0]))
    # assert find_it([1, 2, 2, 3, 3, 3, 4, 3, 3, 3, 2, 2, 1]) == 4
    print(find_it([1, 2, 2, 3, 3, 3, 4, 3, 3, 3, 2, 2, 1]))
