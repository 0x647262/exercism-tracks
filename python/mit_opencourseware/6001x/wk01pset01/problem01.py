'''
Counts vowels contained in input
'''

s = ""

count = 0

for l in s:
    if (l == 'a' or
            l == 'e' or
            l == 'i' or
            l == 'o' or
            l == 'u'):
        count += 1

print("Number of vowels: {0}".format(count))
