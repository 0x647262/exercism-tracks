#!/bin/python3

'''
Task:

    Given an integer, n, print its first 10 multiples. Each multiple n x i
    (where 1 >= i >= 10) should be printed on a new line in the form:
    
        n x i = result

Input Format:

    A single integer, n.

Constraints:

    * 2 <= n < 10
    
Output Format:

    Print  lines of output; each line  (where ) contains the  of  in the form:

        n x i = result

Sample Input:

        2

Sample Output:

        2 x 1  = 2
        2 x 2  = 4
        2 x 3  = 6
        2 x 4  = 8
        2 x 5  = 10
        2 x 6  = 12
        2 x 7  = 14
        2 x 8  = 16
        2 x 9  = 18
        2 x 10 = 20

'''

import sys

n = int(input().strip())
# No information on what to do if a number is outside of the constraints.
for i in range(1,11):
    print("{0} x {1} = {2}".format(n, i, n * i))
