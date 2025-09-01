#!/usr/bin/python3


def clean_string(s: str) -> str:
    # print(f"String({s})")
    helper = []

    for char in s:
        if char == "#":
            if helper:
                helper.pop()
        else:
            helper.append(char)
    return "".join(helper)


if __name__ == "__main__":
    print(clean_string("abc#d##c"))
    print(clean_string("abc####d##c#"))
    print(clean_string("#######"))
    print(clean_string(""))
