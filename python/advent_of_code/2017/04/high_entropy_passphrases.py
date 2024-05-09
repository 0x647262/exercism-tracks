#!/usr/bin/env python3

'''
--- Day 4: High-Entropy Passphrases ---
'''


def load_input(filename):
    '''
    Open input text file returning a 2d array.
    '''
    pwds = list()
    with open(filename, 'r') as file_input:
        for line in file_input.readlines():
            pwds.append(line.strip().split(' '))
    return pwds


def part1(pwds):
    '''
    --- Part 1 ---

    A new system policy has been put in place that requires all accounts to
    use a passphrase instead of simply a password. A passphrase consists of
    a series of words (lowercase letters) separated by spaces.

    To ensure security, a valid passphrase must contain no duplicate words.

    For example:

        aa bb cc dd ee is valid.
        aa bb cc dd aa is not valid - the word aa appears more than once.
        aa bb cc dd aaa is valid - aa and aaa count as different words.

    The system's full passphrase list is available as your puzzle
    input. How many passphrases are valid?
    '''
    safe_pwds = 0
    for password_string in pwds:
        if len(password_string) == len(set(password_string)):
            safe_pwds += 1
    return safe_pwds


def part2(pwds):
    '''
    --- Part Two ---

    For added security, yet another system policy has been put in place. Now, a
    valid passphrase must contain no two words that are anagrams of each other
    - that is, a passphrase is invalid if any word's letters can be rearranged
    to form any other word in the passphrase.

    For example:

        abcde fghij              - is a valid passphrase.
        abcde xyz ecdab          - is not valid - the letters from the third
                                   word can be rearranged to form the first
                                   word.
        a ab abc abd abf abj     - is a valid passphrase, because all letters
                                   need to be used when forming another word.
        iiii oiii ooii oooi oooo - is valid.
        oiii ioii iioi iiio      - is not valid - any of these words can be
                                   rearranged to form any other word.

    Under this new system policy, how many passphrases are valid?
    '''
    safe_pwds = 0
    for password_string in pwds:
        test = set(''.join(sorted(word)) for word in password_string)
        if len(password_string) == len(test):
            safe_pwds += 1
    return safe_pwds


if __name__ == "__main__":
    PWDS = load_input('input.txt')
    print("Part 1:", part1(PWDS))
    print("Part 2:", part2(PWDS))
