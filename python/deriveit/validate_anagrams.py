"""
Validate Anagrams
"""


def are_anagrams(word1: str, word2: str) -> bool:
    dict1: dict[str, int] = {key: word1.count(key) for key in set(word1)}
    dict2: dict[str, int] = {key: word2.count(key) for key in set(word2)}
    return dict1 == dict2


def areAnagrams(s: str, t: str) -> bool:
    return are_anagrams(s, t)
