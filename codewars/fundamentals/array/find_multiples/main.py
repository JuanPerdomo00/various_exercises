def find_multiples(n: int, limit: int) -> list[int]:
    return [i for i in range(n, limit + 1) if i % n == 0]


if __name__ == "__main__":
    print(find_multiples(2, 6))
    print(find_multiples(2, 4))
