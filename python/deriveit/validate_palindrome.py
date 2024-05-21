"""
Validate Palindrome
"""


def is_valid(string: str) -> bool:
    left: int = 0
    right: int = len(string) - 1

    while left < right:
        if not string[left] == string[right]:
            return False
        left += 1
        right -= 1
    return True


def isValid(p: str) -> bool:
    return is_valid(p)
