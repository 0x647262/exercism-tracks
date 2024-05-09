#!/usr/bin/env python3

"""
Python FizzBuzz implementation
"""


def fizzbuzz(start, end):
    """
    Prints the answers to a game of FizzBuzz from (int) start to (int) end
    (inclusive).
    """
    for n in range(start, end + 1):
        if n % 15 == 0:
            print("FizzBuzz")
        elif n % 5 == 0:
            print("Buzz")
        elif n % 3 == 0:
            print("Fizz")
        else:
            print(n)


if __name__ == '__main__':
    fizzbuzz(1, 100)
