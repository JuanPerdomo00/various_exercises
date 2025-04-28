#!/usr/bin/python3


def rot13(message):
    import string
    alp = list(string.ascii_lowercase) 
    encrypt = ""
    for char in message:
        print(char)
        if char.isupper():
            encrypt += alp[((alp.index(char.lower()))+13)%26].upper()
        elif char.islower():
            encrypt += alp[(alp.index(char) + 13) % 26]

        else:
            encrypt += char

    return encrypt


if __name__ == "__main__":
    print(rot13("Abcd"))
    print(rot13("Nopq"))
    print(rot13("J4k3pys"))
