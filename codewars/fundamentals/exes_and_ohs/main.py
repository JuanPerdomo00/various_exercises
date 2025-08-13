#!/usr/bin/python3


def xo(s: str) -> bool:
    return s.lower().count("x") == s.lower().count("o")


if __name__ == "__main__":
    list_xo: list[str] = ["ooxx", "xooxx", "ooxXm", "zpzpzpp", "zzoo"]

    for l_ox in list_xo:
        print(xo(l_ox))
