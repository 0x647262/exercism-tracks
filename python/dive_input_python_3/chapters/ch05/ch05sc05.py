print("\n###############################################")
print("##### 5.5.0 - Verbose Regular Expressions #####")
print("###############################################\n")

print("import re")
import re
print()

print("\
pattern = '''\n\
    ^                   # beginning of string\n\
    M{0,3}              # thousands - 0 to 3 Ms\n\
    (CM|CD|D?C{0,3})    # hundreds - 900 (CM), 400 (CD), 0-300 (0 to 3 Cs),\n\
                        #            or 500-800 (D, followed by 0 to 3 Cs)\n\
    (XC|XL|L?X{0,3})    # tens - 90 (XC), 40 (XL), 0-30 (0 to 3 Xs),\n\
                        #        or 50-80 (L, followed by 0 to 3 Xs)\n\
    (IX|IV|V?I{0,3})    # ones - 9 (IX), 4 (IV), 0-3 (0 to 3 Is),\n\
                        #        or 5-8 (V, followed by 0 to 3 Is)\n\
    $                   # end of string\n\
    '''\
")
pattern = '''
    ^                   # beginning of string
    M{0,3}              # thousands - 0 to 3 Ms
    (CM|CD|D?C{0,3})    # hundreds - 900 (CM), 400 (CD), 0-300 (0 to 3 Cs),
                        #            or 500-800 (D, followed by 0 to 3 Cs)
    (XC|XL|L?X{0,3})    # tens - 90 (XC), 40 (XL), 0-30 (0 to 3 Xs),
                        #        or 50-80 (L, followed by 0 to 3 Xs)
    (IX|IV|V?I{0,3})    # ones - 9 (IX), 4 (IV), 0-3 (0 to 3 Is),
                        #        or 5-8 (V, followed by 0 to 3 Is)
    $                   # end of string
    '''
print()

print("re.search(pattern, 'M', re.VERBOSE)")
print(" = ", re.search(pattern, 'M', re.VERBOSE))
print()

print("re.search(pattern, 'MCMLXXXIX', re.VERBOSE)")
print(" = ", re.search(pattern, 'MCMLXXXIX', re.VERBOSE))
print()

print("re.search(pattern, 'MMMDCCCLXXXVIII', re.VERBOSE)")
print(" = ", re.search(pattern, 'MMMDCCCLXXXVIII', re.VERBOSE))
print()

print("re.search(pattern, 'M')")
print(" = ", re.search(pattern, 'M'))
print()
