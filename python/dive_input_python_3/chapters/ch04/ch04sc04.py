print("\n######################################")
print("##### 4.4.0 - Formatting Strings #####")
print("######################################\n")

print("username = 'mark'")
username = 'mark'
print("password = 'PapayaWhip'")
password = 'PapayaWhip'
print('"{0}\'s password is {1}".format(username, password)')
print("{0}'s password is {1}".format(username, password))

print("\n########################################")
print("##### 4.4.1 - Compound Field Names #####")
print("########################################\n")

print("import humansize")
import humansize
print("si_suffixes = humansize.SUFFIXES[1000]")
si_suffixes = humansize.SUFFIXES[1000]
print("si_suffixes = {0}".format(si_suffixes))

print("'1000{0[0]} = 1{0[1]}'.format(si_suffixes)")
print("1000{0[0]} = 1{0[1]}".format(si_suffixes))

print("import sys")
import sys
print("'1MB = 1000{0.modules[humansize].SUFFIXES[1000][0]}'.format(sys)")
print("1MB = 1000{0.modules[humansize].SUFFIXES[1000][0]}".format(sys))

print("\n#####################################")
print("##### 4.4.2 - Format Specifiers #####")
print("#####################################\n")

print("'{0:.1f} {1}'.format(698.24, 'GB')")
print("{0:.1f} {1}".format(698.24, 'GB'))
