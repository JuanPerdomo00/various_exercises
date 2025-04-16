#!/usr/bin/python3


summation_of_primes = lambda n: sum(
    i for i in range(2, n + 1) if all(i % d != 0 for d in range(2, int(i**0.5) + 1))
)

if __name__ == "__main__":
    print(summation_of_primes(5))
    print(summation_of_primes(6))
    print(summation_of_primes(7))
