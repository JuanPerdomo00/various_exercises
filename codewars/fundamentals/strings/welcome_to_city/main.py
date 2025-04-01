#!/usr/bin/python3

# Create a method that takes as input a name, city, and state to welcome a person.
# Note that name will be an array consisting of one or more values that should be joined together with one space between each,
# and the length of the name array in test cases will vary.


def say_hello(name, city, state):
    return f"Hello, {" ".join([names for names in name])}! Welcome to {city}, {state}!"


if __name__ == "__main__":
    print(say_hello(["John", "Smith"], "Phoenix", "Arizona"))
    print(say_hello(["Franklin", "Delano", "Roosevelt"], "Chicago", "Illinois"))
    assert say_hello(["John", "Smith"], "Phoenix", "Arizona") == 'Hello, John Smith! Welcome to Phoenix, Arizona!'
