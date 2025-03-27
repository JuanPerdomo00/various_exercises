#!/usr/bin/python3


if __name__ == "__main__":
    n = (2, 10, 100)
    print(sum([i for i in range(1, n[0]) if i % 3 == 0 or i % 5 == 0]))
    print(sum([i for i in range(1, n[1]) if i % 3 == 0 or i % 5 == 0]))
    print(sum([i for i in range(1, n[2]) if i % 3 == 0 or i % 5 == 0]))
