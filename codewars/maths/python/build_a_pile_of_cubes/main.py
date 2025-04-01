#!/usr/bin/python3 



def find_nb(m):
    n = 1
    total_volume = 0
    
    while True:
        total_volume += n ** 3
        if total_volume == m:
            return n
        elif total_volume > m:
            return -1
        n += 1


if __name__ == "__main__":
    #print(primes(100))
    #print(primes(16))
    #print(primes(4183059834009))
    print(find_nb(4))
    print(find_nb(16))
    print(find_nb(4183059834009))
