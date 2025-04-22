#!/usr/bin/python3


def birthdayCakeCandles(candles: list[int]):
    from collections import Counter

    return max(Counter(candles).values())
    # return max(list(dict((i, sorted(candles).count(i)) for i in candles).values()))


if __name__ == "__main__":
    print(birthdayCakeCandles([3, 2, 1, 3]))
    print(birthdayCakeCandles([4, 4, 1, 3]))
