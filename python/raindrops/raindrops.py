"""
Raindrops
"""


def convert(number: int) -> str:
    """
    Given a number:

    * divisible by 3, add "Pling" to the result.
    * divisible by 5, add "Plang" to the result.
    * divisible by 7, add "Plong" to the result.
    * not divisible by 3, 5, or 7, the result should be the number as a string.
    """

    sound: str = ""
    if number % 3 == 0:
        sound += "Pling"
    if number % 5 == 0:
        sound += "Plang"
    if number % 7 == 0:
        sound += "Plong"
    if sound == "":
        sound = str(number)

    return sound
