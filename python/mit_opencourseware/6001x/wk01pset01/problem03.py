'''
Checks for the longest alphabetical substring
'''

s = ""

alphabet = "abcdefghijklmnopqrstuvwxyz"

longest = ""
current = ""

c = 0
l = 0

while c < len(s):
    if s[c] == ' ':
        c += 1

    while c < len(s) and l < len(alphabet):
        while l < len(alphabet) and s[c] != alphabet[l]:
            l += 1
        if l == len(alphabet):
            break
        if s[c] == alphabet[l]:
            current += str(s[c])
        c += 1
        if c == len(s):
            break

    if l == len(alphabet):
        l = 0
    if len(longest) < len(current):
        longest = current

    current = ""

print("Longest substring in alphabetical order is: {0}".format(longest))
