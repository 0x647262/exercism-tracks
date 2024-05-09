print("\n#######################################")
print("##### 3.3.0 - List Comprehensions #####")
print("#######################################\n")

print("a_list = [1, 9, 8, 4]")
a_list = [1, 9, 8, 4]

print("[elem * 2 for elem in a_list] = {0}".format(
    [elem * 2 for elem in a_list]))

print("a_list = {0}".format(a_list))
a_list = [elem * 2 for elem in a_list]
print("a_list = [elem * 2 for elem in a_list]")
print("a_list = {0}".format(a_list))

print("import os")
import os
print("import glob")
import glob

print("glob.glob('*') = {0}".format(glob.glob('*')))

print("[os.path.realpath(f) for f in glob.glob('*')] = {0}".format(
    [os.path.realpath(f) for f in glob.glob('*')]))

print("[f for f in glob.glob('*') if os.stat(f).st_size > 6000] = {0}".format(
    [f for f in glob.glob('*.py') if os.stat(f).st_size > 6000]))

print("[(os.stat(f).st_size, os.path.realpath(f)) for f in glob.glob('*')] = {0}".format(
    [(os.stat(f).st_size, os.path.realpath(f)) for f in glob.glob('*')]))
