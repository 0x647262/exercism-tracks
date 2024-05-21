"""
Group Anagrams
"""


def group_anagrams(array: "list[str]") -> "list[list[str]]":
    grouped: dict[str, list[str]] = {}

    for string in array:
        key: str = str({key: string.count(key) for key in sorted(set(string))})
        if key not in grouped:
            grouped[key] = []
        grouped[key].append(string)

    return list(grouped.values())


def groupAnagrams(arr: "list[str]") -> "list[list[str]]":
    return group_anagrams(arr)
