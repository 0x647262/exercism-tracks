"""
Reverse Array
"""

from typing import Any  # pyright: ignore[reportAny]


def reverse_array(array: "list[Any]") -> None:
    """
    Reverses `array` in-place
    """
    left: int = 0
    right: int = len(array) - 1

    while left < right:
        array[left], array[right] = array[right], array[left]

        left += 1
        right -= 1


def reverseArray(a: "list[Any]") -> None:
    return reverse_array(a)
