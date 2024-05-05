"""
 Armstrong Numbers

 https://en.wikipedia.org/wiki/Narcissistic_number
 https://mathworld.wolfram.com/NarcissisticNumber.html
"""


def evaluate(number: int, length: int) -> int:
    """
    Sums a number's cubes
    """

    # Base case:
    if number // 10 == 0:
        return number**length

    # Recurse:
    return (number % 10) ** length + evaluate(number // 10, length)


def digits(number: int) -> int:
    """
    Returns the number of digits in a number
    """
    return len(str(number))


def is_armstrong_number(number: int) -> bool:
    """
    Discern whether or not a number is an Armstrong (Narcissistic) number
    """
    return number == evaluate(number, digits(number))
