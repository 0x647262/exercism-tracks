"""
Contains Duplicate
"""

from typing import List


def has_duplicate(numbers: List[int]) -> bool:
    return len(set(numbers)) != len(numbers)


def hasDuplicate(numbers: List[int]) -> bool:
    return has_duplicate(numbers)
