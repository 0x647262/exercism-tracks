print("\n##########################################")
print("##### 5.4.0 - Using The {n,m} Syntax #####")
print("##########################################\n")

print("import re")
import re
print()

print("pattern = '^M?M?M?$'")
pattern = '^M?M?M?$'
print()

print("re.search(pattern, 'M'")
print(" = ", re.search(pattern, 'M'))
print()

print("re.search(pattern, 'M'")
print(" = ", re.search(pattern, 'M'))
print()

print("re.search(pattern, 'MM'")
print(" = ", re.search(pattern, 'MM'))
print()

print("re.search(pattern, 'MMM'")
print(" = ", re.search(pattern, 'MMM'))
print()

print("re.search(pattern, 'MMMM'")
print(" = ", re.search(pattern, 'MMMM'))
print()

print("pattern = '^M{0,3}$'")
pattern = '^M{0,3}$'
print()

print("re.search(pattern, 'M'")
print(" = ", re.search(pattern, 'M'))
print()

print("re.search(pattern, 'MM'")
print(" = ", re.search(pattern, 'MM'))
print()

print("re.search(pattern, 'MMM'")
print(" = ", re.search(pattern, 'MMM'))
print()

print("re.search(pattern, 'MMMM'")
print(" = ", re.search(pattern, 'MMMM'))
print()

print("\n##############################################")
print("##### 5.4.1 - Checking For Tens And Ones #####")
print("##############################################\n")

print("pattern = '^M?M?M?(CM|CD|D?C?C?C?)(XC|XL|L?X?X?X?)$'")
pattern = '^M?M?M?(CM|CD|D?C?C?C?)(XC|XL|L?X?X?X?)$'
print()

print("re.search(pattern, 'MCMXL')")
print(" = ", re.search(pattern, 'MCMXL'))
print()

print("re.search(pattern, 'MCML')")
print(" = ", re.search(pattern, 'MCML'))
print()

print("re.search(pattern, 'MCMLX')")
print(" = ", re.search(pattern, 'MCMLX'))
print()

print("re.search(pattern, 'MCMLXXX')")
print(" = ", re.search(pattern, 'MCMLXXX'))
print()

print("re.search(pattern, 'MCMLXXXX')")
print(" = ", re.search(pattern, 'MCMLXXXX'))
print()

print("pattern ='^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$'")
pattern = '^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$'
print()

print("re.search(pattern, 'MCMXL')")
print(" = ", re.search(pattern, 'MCMXL'))
print()

print("re.search(pattern, 'MCML')")
print(" = ", re.search(pattern, 'MCML'))
print()

print("re.search(pattern, 'MCMLX')")
print(" = ", re.search(pattern, 'MCMLX'))
print()

print("re.search(pattern, 'MCMLXXX')")
print(" = ", re.search(pattern, 'MCMLXXX'))
print()

print("re.search(pattern, 'MCMLXXXX')")
print(" = ", re.search(pattern, 'MCMLXXXX'))
print()



