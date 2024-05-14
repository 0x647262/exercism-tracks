"""
Collatz Conjecture

https://en.wikipedia.org/wiki/Collatz_conjecture
https://mathworld.wolfram.com/CollatzProblem.html
"""


def evaluate(number: int, iterations: int = 0) -> int:
    """
    Returns the number of steps it takes to reduce a number to 1 using the
    rules outlined by the Collatz Conjecture:

        * If n is even, divide n by 2 to get n / 2
        * If n is odd, multiply n by 3 and add 1 to get 3n + 1
    """

    # Base case:
    if number == 1:
        return iterations

    # Recurse:
    return evaluate(
        number // 2 if number % 2 == 0 else number * 3 + 1, iterations + 1
    )


def steps(number: int) -> int:
    """
    Returns the number of steps in a given Collatz Conjecture or 3x+1 problem
    """
    if number < 1:
        raise ValueError("Only positive integers are allowed")

    return evaluate(number)
