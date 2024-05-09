#!/bin/python3

import sys

def aVeryBigSum(n, ar):
    bignumber = 0
    for n in ar:
        bignumber += n
    return bignumber

n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = aVeryBigSum(n, ar)
print(result)
