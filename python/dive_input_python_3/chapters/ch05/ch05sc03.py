print("\n##########################################")
print("##### 5.3.1 - Checking For Thousands #####")
print("##########################################\n")

print("import re")
import re
print()

print("pattern = '^M?M?M?$'")
pattern = '^M?M?M?$'
print()

print("re.search(pattern, 'M')")
print(" = ", re.search(pattern, 'M'))
print()

print("re.search(pattern, 'MM')")
print(" = ", re.search(pattern, 'MM'))
print()

print("re.search(pattern, 'MMM')")
print(" = ", re.search(pattern, 'MMM'))
print()

print("re.search(pattern, 'MMMM')")
print(" = ", re.search(pattern, 'MMMM'))
print()

print("re.search(pattern, '')")
print(" = ", re.search(pattern, ''))
print()

print("\n#########################################")
print("##### 5.3.2 - Checking For Hundreds #####")
print("#########################################\n")

print("pattern = '^M?M?M?(CM|CD|D?C?C?C?)$'")
pattern = '^M?M?M?(CM|CD|D?C?C?C?)$'
print()

print("re.search(pattern, 'MCM')")
print(" = ", re.search(pattern, 'MCM'))
print()

print("re.search(pattern, 'MD')")
print(" = ", re.search(pattern, 'MD'))
print()

print("re.search(pattern, 'MMMCCC')")
print(" = ", re.search(pattern, 'MMMCCC'))
print()

print("re.search(pattern, 'MCMC')")
print(" = ", re.search(pattern, 'MCMC'))
print()

print("re.search(pattern, '')")
print(" = ", re.search(pattern, ''))
