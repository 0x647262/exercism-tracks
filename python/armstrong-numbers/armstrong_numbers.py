"""
 Armstrong Numbers

 https://en.wikipedia.org/wiki/Narcissistic_number
 https://mathworld.wolfram.com/NarcissisticNumber.html
"""


def is_armstrong_number(number: int) -> bool:
    """
    Calculate whether or not a number is an Armstrong number
    """
    strnumber: str = str(number)
    total: int = 0
    for n in strnumber:
        total += int(n) ** len(strnumber)

    return number == total
