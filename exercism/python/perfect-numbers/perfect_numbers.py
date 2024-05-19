"""
Perfect Numbers
"""

import math


def divisors(number: int) -> list[int]:
    """
    Creates a list of divisors of `number` excluding `number`
    """
    divisors: list[int] = [1]
    for i in range(2, int(math.sqrt(number)) + 1):
        if number % i == 0:
            divisors += [i, number // i]
    return list(set(divisors))


def classify(number: int) -> str:
    """
    A perfect number equals the sum of its positive divisors.
    """
    if number <= 0:
        raise ValueError("Classification is only possible for positive integers.")

    s: int = sum(divisors(number))
    if s < number or number == 1:
        return "deficient"
    if s > number:
        return "abundant"
    return "perfect"
