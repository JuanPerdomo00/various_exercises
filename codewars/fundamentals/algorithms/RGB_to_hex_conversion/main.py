#!/usr/bin/python3


def rgb(r, g, b):
    table_hex = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "A", "B", "C", "D", "E", "F"]
    operation_max_min = lambda v: max(0, min(255, v))

    r = operation_max_min(r)
    g = operation_max_min(g)
    b = operation_max_min(b)

    op_r = [r // 16, r % 16]
    op_g = [g // 16, g % 16]
    op_b = [b // 16, b % 16]

    return f"{table_hex[op_r[0]]}{table_hex[op_r[1]]}{table_hex[op_g[0]]}{table_hex[op_g[1]]}{table_hex[op_b[0]]}{table_hex[op_b[1]]}"


if __name__ == "__main__":
    print(rgb(255, 255, 255))
    print(rgb(1, 2, 3))
    print(rgb(0, 0, 0))
    print(rgb(254, 253, 252))
    print(rgb(-20, 275, 125))
