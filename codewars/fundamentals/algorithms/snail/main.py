#!/usr/bin/python3


def snail(snail_map):
    if not snail_map:
        return []

    arr_new = []

    while snail_map:
        arr_new += snail_map.pop(0)

        if not snail_map:
            break

        for fila in snail_map:
            if fila:
                arr_new.append(fila.pop(-1))

        if snail_map:
            arr_new += snail_map.pop(-1)[::-1]

        for fila in reversed(snail_map):
            if fila:
                arr_new.append(fila.pop(0))

    # print(arr_new)
    return arr_new


array = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
]


expected = [1, 2, 3, 6, 9, 8, 7, 4, 5]


array_two = [
    [1, 2, 3],
    [8, 9, 4],
    [7, 6, 5],
]

expected_two = [1, 2, 3, 4, 5, 6, 7, 8, 9]


array_three = [
    [1, 2, 3, 1],
    [4, 5, 6, 4],
    [7, 8, 9, 7],
    [7, 8, 9, 7],
]

expected_three = [1, 2, 3, 1, 4, 7, 7, 9, 8, 7, 7, 4, 5, 6, 9, 8]

if __name__ == "__main__":
    snail(array)
    print(expected)
    print("===========")
    snail(array_two)
    print(expected_two)
    print("===========")
    snail(array_three)
    print(expected_three)
