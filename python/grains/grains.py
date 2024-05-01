"""
Grains

https://en.wikipedia.org/wiki/Wheat_and_chessboard_problem
https://mathworld.wolfram.com/GeometricSeries.html
"""


def square(sq: int):
    """
    Returns the number of entitites on a given chessboard square
    """
    if sq < 1 or sq > 64:
        raise ValueError("square must be between 1 and 64")

    return 2 ** (sq - 1)


def total():
    """
    Returns the total number of entitites on a Chessboard
    """
    return (2**64) - 1
