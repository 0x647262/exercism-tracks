"""
Check Sorted Array
"""


def is_sorted(array: "list[int]") -> bool:
    for index, value in enumerate(array):
        if index == len(array) - 1:
            break
        if not value <= array[index + 1]:
            return False
    return True


def isSorted(a: "list[int]") -> bool:
    return is_sorted(a)
