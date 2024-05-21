"""
Two Arrays
"""


def test() -> None:
    """
    Array pointer example
    """
    x: list[int] = [3, 2, 4]
    y: list[int] = x
    y[2] = 1

    print(x)
