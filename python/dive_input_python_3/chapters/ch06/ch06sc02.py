print("\n##########################################################")
print("##### 6.2.0 - I Know, Let's Use Regulat Expressions! #####")
print("##########################################################\n")

print("import re")
import re
print()

print("""
def plural(noun):
if re.search('[sxz]$', noun):
        return re.sub('$', 'es', noun)
    elif re.search('[^aeioudgkprt]h$', noun):
        return re.sub('$', 'es', noun)
    elif re.search('[^aeiou]y$', noun):
        return re.sub('y$', 'ies', noun)
    else:
        return noun + 's'
""")

def plural(noun):
    if re.search('[sxz]$', noun):
        return re.sub('$', 'es', noun)
    elif re.search('[^aeioudgkprt]h$', noun):
        return re.sub('$', 'es', noun)
    elif re.search('[^aeiou]y$', noun):
        return re.sub('y$', 'ies', noun)
    else:
        return noun + 's'

print("re.search('[abc]', 'Mark')")
print(" = ", re.search('[abc]', 'Mark'))
print()

print("re.sub('[abc]', 'o', 'Mark')")
print(" = ", re.sub('[abc]', 'o', 'Mark'))
print()

print("re.sub('[abc]', 'o', 'rock')")
print(" = ", re.sub('[abc]', 'o', 'rock'))
print()

print("re.sub('[abc]', 'o', 'caps')")
print(" = ", re.sub('[abc]', 'o', 'caps'))
print()

print("re.search('[^aeiou]y$', 'vacancy')")
print(" = ", re.search('[^aeiou]y$', 'vacancy'))
print()

print("re.search('[^aeiou]y$', 'boy')")
print(" = ", re.search('[^aeiou]y$', 'boy'))
print()

print("re.search('[^aeiou]y$', 'day')")
print(" = ", re.search('[^aeiou]y$', 'day'))
print()

print("re.search('[^aeiou]y$', 'pita')")
print(" = ", re.search('[^aeiou]y$', 'pita'))
print()

print("re.sub('y$', 'ies', 'vacancy')")
print(" = ", re.sub('y$', 'ies', 'vacancy'))
print()

print("re.sub('y$', 'ies', 'agency')")
print(" = ", re.sub('y$', 'ies', 'agency'))
print()

print("re.sub('([^aeiou])y$', r'\\1ies', 'vacancy')")
print(" = ", re.sub('([^aeiou])y$', r'\1ies', 'vacancy'))
