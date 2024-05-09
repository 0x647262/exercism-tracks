#
# Skeleton file for the Python "Hello World" exercise.
#

# http://stackoverflow.com/a/16739649

def hello(name=''):
    if not name:
        name = "World"

    return "Hello, {0}!".format(name)
