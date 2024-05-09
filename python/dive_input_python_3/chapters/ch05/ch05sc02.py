print("\n################################################")
print("##### 5.2.0 - Case Study: Street Addresses #####")
print("################################################\n")

print("s = '100 NORTH MAIN ROAD'")
s = '100 NORTH MAIN ROAD'
print()

print("s.replace('ROAD', 'RD.'")
print(" = ", s.replace('ROAD', 'RD.'))
print()

print("s = '100 NORTH MAIN ROAD'")
s = '100 NORTH BROAD ROAD'
print()

print("s.replace('ROAD', 'RD.'")
print(" = ", s.replace('ROAD', 'RD.'))
print()

print("s[:-4] + s[-4:].replace('ROAD', 'RD')")
print(" = ", s[:-4] + s[-4:].replace('ROAD', 'RD'))
print()

print("import re")
import re
print()

print("re.sub('ROAD$', 'RD.', s)")
print(" = ", re.sub('ROAD$', 'RD.', s))
print()

print("s = 100 BROAD'")
s = '100 BROAD'
print()

print("re.sub('ROAD', 'RD', s)")
print(" = ", re.sub('ROAD', 'RD', s))
print()

print("re.sub('\\\\bROAD$', 'RD.', s)")
print(" = ", re.sub('\\bROAD$', 'RD.', s))
print()

print("re.sub(r'\\bROAD$', 'RD.', s)")
print(" = ", re.sub(r'\bROAD$', 'RD.', s))
print()

print("s = 100 BROAD ROAD APT. 3'")
s = '100 BROAD ROAD APT. 3'
print()

print("re.sub(r'\\bBROAD$', 'RD.', s)")
print(" = ", re.sub(r'\bROAD$', 'RD.', s))
print()

print("re.sub(r'\\bROAD\\b', 'RD.', s)")
print(" = ", re.sub(r'\bROAD\b', 'RD.', s))
