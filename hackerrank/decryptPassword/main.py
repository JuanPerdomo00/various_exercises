#!/usr/bin/python3


def decryptPassword(s: str):
    new_str = []
    numbers = []
    i = 0

    while i < len(s) and s[i].isdigit():
        numbers.append(s[i])
        i += 1

    while i < len(s):
        if (
            i + 1 < len(s)
            and s[i].isupper()
            and s[i + 1].islower()
            and (i + 2 < len(s) and s[i + 2] == "*")
        ):
            new_str.append(s[i + 1])
            new_str.append(s[i])
            i += 3
            continue
        elif s[i] == "0" and numbers:
            new_str.append(numbers.pop())
            i += 1
        else:
            new_str.append(s[i])
            i += 1

    return "".join(new_str)


if __name__ == "__main__":
    print(decryptPassword("43Ah*ck0rr0nk"))
