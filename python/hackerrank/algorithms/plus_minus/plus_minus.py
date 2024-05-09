#!/bin/python3


import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]


def count_pos():
    count = 0
    for num in arr:
        if num > 0:
            count += 1
    return count

            
def count_neg():
    count = 0
    for num in arr:
        if num < 0:
            count += 1
    return count


def count_zed():
    count = 0
    for num in arr:
        if num == 0:
            count += 1
    return count

print(count_pos() / n)
print(count_neg() / n)
print(count_zed() / n)
