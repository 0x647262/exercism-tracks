'''
Counts the number of times the string "bob" occurs in a string
'''

s = ""

count = 0

for i in range(0, len(s) - 1):
    if s[i] == 'b':
        if i + 1 < len(s) and s[i + 1] == 'o':
            if i + 2 < len(s) and s[i + 2] == 'b':
                count += 1

print("Number of times bob occurs is: {0}".format(count))
