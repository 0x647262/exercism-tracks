print("\n#####################################################")
print("##### 5.6.0 - Case Study: Parsing Phone Numbers #####")
print("#####################################################\n")

print("import re")
import re

print("phonePattern = re.compile(r'^(\d{3})-(\d{3})-(\d{4})$')")
phonePattern = re.compile(r'^(\d{3})-(\d{3})-(\d{4})$')
print()

print("phonePattern.search('800-555-1212').groups()")
print(" = ", phonePattern.search('800-555-1212').groups())
print()

print("phonePattern.search('800-555-1212-1234')")
print(" = ", phonePattern.search('800-555-1212-1234'))
print()

print("phonePattern = re.compile(r'^(\d{3})-(\d{3})-(\d{4})-(\d+)$')")
phonePattern = re.compile(r'^(\d{3})-(\d{3})-(\d{4})-(\d+)$')
print()

print("phonePattern.search('800-555-1212-1234').groups()")
print(" = ", phonePattern.search('800-555-1212-1234').groups())
print()

print("phonePattern.search('800 555 1212 1234')")
print(" = ", phonePattern.search('800 555 1212 1234'))
print()

print("phonePattern.search('800-555-1212')")
print(" = ", phonePattern.search('800-555-1212'))
print()

print("phonePattern = re.compile(r'^(\d{3})\D+(\d{3})\D+(\d{4})\D+(\d+)$')")
phonePattern =re.compile(r'^(\d{3})\D+(\d{3})\D+(\d{4})\D+(\d+)$')
print()

print("phonePattern.search('800 555 1212 1234').groups()")
print(" = ", phonePattern.search('800 555 1212 1234').groups())
print()

print("phonePattern.search('800-555-1212-1234').groups()")
print(" = ", phonePattern.search('800-555-1212-1234').groups())
print()

print("phonePattern.search('80055512121234')")
print(" = ", phonePattern.search('80055512121234'))
print()

print("phonePattern.search('800-555-1212')")
print(" = ", phonePattern.search('800-555-1212'))
print()

print("phonePattern = re.compile(r'^(\d{3})\D*(\d{3})\D*(\d{4})\D*(\d*)$')")
phonePattern = re.compile(r'^(\d{3})\D*(\d{3})\D*(\d{4})\D*(\d*)$')
print()

print("phonePattern.search('80055512121234').groups()")
print(" = ", phonePattern.search('80055512121234').groups())
print()

print("phonePattern.search('800.555.1212 x1234').groups()")
print(" = ", phonePattern.search('800.555.1212 x1234').groups())
print()

print("phonePattern.search('800-555-1212').groups()")
print(" = ", phonePattern.search('800-555-1212').groups())
print()

print("phonePattern.search('(800)5551212 x1234')")
print(" = ", phonePattern.search('(800)5551212 x1234'))
print()

print("phonePattern = re.compile(r'^\D*(\d{3})\D*(\d{3})\D*(\d{4})\D*(\d*)$')")
phonePattern = re.compile(r'^\D*(\d{3})\D*(\d{3})\D*(\d{4})\D*(\d*)$')
print()

print("phonePattern.search('(800)5551212 ext. 1234').groups()")
print(" = ", phonePattern.search('(800)5551212 ext. 1234').groups())
print()

print("phonePattern.search('800-555-1212').groups()")
print(" = ", phonePattern.search('800-555-1212').groups())
print()

print("phonePattern.search('work 1-(800) 555.1212 #1234')")
print(" = ", phonePattern.search('work 1-(800) 555.1212 #1234'))
print()

print("phonePattern = re.compile(r'(\d{3})\D*(\d{3})\D*(\d{4})\D*(\d*)$')")
phonePattern = re.compile(r'(\d{3})\D*(\d{3})\D*(\d{4})\D*(\d*)$')
print()

print("phonePattern.search('work 1-(800) 555.1212 #1234').groups()")
print(" = ", phonePattern.search('work 1-(800) 555.1212 #1234').groups())
print()

print("phonePattern.search('800-555-1212').groups()")
print(" = ", phonePattern.search('800-555-1212').groups())
print()

print("phonePattern.search('80055512121234').groups()")
print(" = ", phonePattern.search('80055512121234').groups())
print()

print("\
phonePattern = re.compile(r'''\n\
    # don't match beginning of string, number can start anywhere\n\
    (\d{3})     # area code is 3 digits (e.g. '800')\n\
    \D*         # optional separator is any number of non-digits\n\
    (\d{3})     # trunk is 3 digits (e.g. '555')\n\
    \D*         # optional separator\n\
    (\d{4})     # rest of number is 4 digits (e.g. '1212')\n\
    \D*         # optional separator\n\
    (\d*)       # extension is optional and can be any number of digits\n\
    $           # end of string\n\
    ''', re.VERBOSE)")
phonePattern = re.compile(r'''
                # don't match beginning of string, number can start anywhere
    (\d{3})     # area code is 3 digits (e.g. '800')
    \D*         # optional separator is any number of non-digits
    (\d{3})     # trunk is 3 digits (e.g. '555')
    \D*         # optional separator
    (\d{4})     # rest of number is 4 digits (e.g. '1212')
    \D*         # optional separator
    (\d*)       # extension is optional and can be any number of digits
    $           # end of string
    ''', re.VERBOSE)
print()

print("phonePattern.search('work 1-(800) 555.1212 #1234').groups()")
print(" = ", phonePattern.search('work 1-(800) 555.1212 #1234').groups())
print()

print("phonePattern.search('800-555-1212')")
print(" = ", phonePattern.search('800-555-1212'))
print()
