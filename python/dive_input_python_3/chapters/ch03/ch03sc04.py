print("import os")
import os
print("import glob")
import glob
print("humansize")
import humansize

print("\n#############################################")
print("##### 3.4.0 - Dictionary Comprehensions #####")
print("#############################################\n")

print("metadata = [(f, os.stat(f)) for f in glob.glob('*')]")
metadata = [(f, os.stat(f)) for f in glob.glob('*')]
print("metadata[0] = {0}".format(metadata[0]))

print("metadata_dict = {f:os.stat(f) for f in glob.glob('*')}")
metadata_dict = {f:os.stat(f) for f in glob.glob('*')}

print("type(metadata_dict) = {0}".format(type(metadata_dict)))

print("list(metadata_dict.keys()) = {0}".format(list(metadata_dict.keys())))

print("metadata_dict['ch03sc04.py'].st_size = {0}".format(
    metadata_dict['ch03sc04.py'].st_size))

print("metadata_dict = {f:os.stat(f) for f in glob.glob('*')}")
metadata_dict = {f:os.stat(f) for f in glob.glob('*')}

print("program_dict = \
{os.path.splitext(f)[0]:humansize.approximate_size(meta.st_size) \
for f, meta in metadata_dict.items() if meta.st_size > 1000}")

program_dict = {
        os.path.splitext(f)[0]:humansize.approximate_size(meta.st_size)
        for f, meta in metadata_dict.items() if meta.st_size > 1000}

print("list(humansize_dict.keys()) = {0}".format(list(program_dict.keys())))

print("humansize_dict['ch03sc04'] = {0}".format(
    program_dict['ch03sc04']))

print("\n########################################################################")
print("##### 3.4.1 - Other Fun Stuff To Do With Dictionary Comprehensions #####")
print("########################################################################\n")

print("a_dict = {'a': 1, 'b': 2, 'c': 3}")
a_dict = {'a': 1, 'b': 2, 'c': 3}

value:key for key, value in a_dict.items()
