#!/bin/python3

import sys

def simpleArraySum(n, ar):
    result = 0
    for num in ar:
        result += num
    return result

n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = simpleArraySum(n, ar)
print(result)
