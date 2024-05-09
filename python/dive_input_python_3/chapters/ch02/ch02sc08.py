print("\n######################")
print("##### 2.8.0 None #####")
print("######################\n")

print("type(None) = {0}".format(type(None)))
print("None == False = {0}".format(None == False))
print("None == 0 = {0}".format(None == 0))
print("None == '' = {0}".format(None == ''))
print("None == None = {0}".format(None == None))
print("x = None")
x = None
print("x == None = {0}".format(x == None))
print("y = None")
y = None
print("x == y = {0}".format(x == y))

print("\n###########################################")
print("##### 2.8.1 None In A Boolean Context #####")
print("###########################################\n")

def is_it_true(anything):
    if anything:
        print("Yes, it's true")
    else:
        print("No, it's false")

print("is_it_true(None):")
is_it_true(None)
print("is_it_true(not None):")
is_it_true(not None)
