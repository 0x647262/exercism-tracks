"""
Triangle
"""

from typing import Callable


def _valid_triangle(decorated: Callable) -> Callable:
    """
    Determines whether or not a triangle is valid
    """

    def inner(sides):
        if 0 in sides:
            return False
        a, b, c = sides
        return a + b >= c and b + c >= a and c + a >= b and decorated(sides)

    return inner


def _unique_sides(sides: list[int]) -> int:
    """
    Converts a sides array into a set of unique sides
    """
    return len(set(sides))


@_valid_triangle
def equilateral(sides: list[int]) -> bool:
    """
    Returns whether or not a trianangle is equilateral
    """
    return _unique_sides(sides) == 1


@_valid_triangle
def isosceles(sides: list[int]) -> bool:
    """
    Returns whether or not a trianangle is isosceles
    """

    return _unique_sides(sides) <= 2


@_valid_triangle
def scalene(sides: list[int]) -> bool:
    """
    Returns whether or not a trianangle is scalene
    """

    return _unique_sides(sides) == 3
