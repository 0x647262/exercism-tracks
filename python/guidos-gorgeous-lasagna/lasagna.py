"""Functions used in preparing Guido's gorgeous lasagna.

Learn about Guido, the creator of the Python language:
https://en.wikipedia.org/wiki/Guido_van_Rossum

This is a module docstring, used to describe the functionality
of a module and its functions and/or classes.
"""

EXPECTED_BAKE_TIME = 40


def bake_time_remaining(elapsed_bake_time: int):
    """Calculate the bake time remaining.

    :param elapsed_bake_time: int - baking time already elapsed.
    :return: int - remaining bake time (in minutes) derived from
        'EXPECTED_BAKE_TIME'.

    Function that takes the actual minutes the lasagna has been in the oven as
    an argument and returns how many minutes the lasagna still needs to bake
    based on the `EXPECTED_BAKE_TIME`.
    """
    return EXPECTED_BAKE_TIME - elapsed_bake_time


def preparation_time_in_minutes(number_of_layers: int):
    """
    :param number_of_layers: int Desired number of layers for the lasagna
    :return: int Minutes of preperation time given the desired number of layers
    """
    return number_of_layers * 2


def elapsed_time_in_minutes(number_of_layers: int, elapsed_bake_time: int):
    """
    :param number_of_layers: int Desired number of layers for the lasagna
    :param elapsed_bake_time: int Elapsed baking time
    :return: int Total amount of elapsed time in minutes
    """
    return preparation_time_in_minutes(number_of_layers) + elapsed_bake_time
