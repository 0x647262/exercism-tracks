import os

print("\n#########################################")
print("##### 3.2.1 - The Current Directory #####")
print("#########################################\n")

print("os.getcwd() = {0}".format(os.getcwd()))

os.chdir('/home/')
print("os.chdir('/home/')")
print("os.getcwd() = {0}".format(os.getcwd()))

print("\n##############################################################")
print("##### 3.2.2 - Working With Filenames and Directory Names #####")
print("##############################################################\n")

print("os.path.join('/home', 'guest') = {0}".format(
    os.path.join('/home', 'guest')))

print("os.path.join('/home/guest', 'file.txt') = {0}".format(
    os.path.join('/home/guest', 'file.txt')))

print("os.path.expanduser('~') = {0}".format(
    os.path.expanduser('~')))

print("os.path.join(os.path.expanduser('~'), 'path', 'to', 'file' = {0}".format(
    os.path.join(os.path.expanduser('~'), 'path', 'to', 'file')))

print("pathname = '~/path/to/file.txt'")
pathname = '~/path/to/file.txt'

print("os.path.split(pathname) = {0}".format(
    os.path.split(pathname)))

print("(dirname, filename) = os.path.split(pathname)")
dirname, filename = os.path.split(pathname)
print("dirname = {0}".format(dirname))
print("filename = {0}".format(filename))

print("(shortname, extension) = os.path.splitext(filename)")
shortname, extension = os.path.splitext(filename)
print("shortname = {0}".format(shortname))
print("extension = {0}".format(extension))

print("os.chdir('~')")
os.chdir(os.path.expanduser('~'))
print("import glob")
import glob
print("glob.glob('*') = {0}".format(glob.glob('*')))

print("\n#########################################")
print("##### 3.2.4 - Getting File Metadata #####")
print("#########################################\n")

print("print(os.getcwd()) = {0}".format(os.getcwd()))
print("metadata = os.stat('feed.xml')")
metadata = os.stat('test.txt')
print("metadata.st_mtime = {0}".format(metadata.st_mtime))

import time
print("time.localtime(metadata.st_mtime) = {0}".format(
    time.localtime(metadata.st_mtime)))

print("metadata.st_size = {0}".format(
    metadata.st_size))

print("\n###################################################")
print("##### 3.2.5 - Constructing Absolute Pathnames #####")
print("###################################################\n")

print(os.getcwd())
print(os.path.realpath('test.txt'))
