print("\n####################################")
print("##### 2.4.1 - Creating A List: #####")
print("####################################\n")

a_list = ['a', 'b', 'mpilgrim', 'z', 'example']
print("The list:")
print(a_list)

print("a_list[0] = {0}".format(a_list[0]))
print("a_list[4] = {0}".format(a_list[4]))
print("a_list[-1] = {0}".format(a_list[-1]))
print("a_list[-3] = {0}".format(a_list[-3]))

print("\n###################################")
print("##### 2.4.2 - Slicing A List: #####")
print("###################################\n")

print("a_list[1:3] - {0}".format(a_list[1:3]))
print("a_list[1:-1] - {0}".format(a_list[1:-1]))
print("a_list[0:3] - {0}".format(a_list[0:3]))
print("a_list[:3] - {0}".format(a_list[:3]))
print("a_list[:] - {0}".format(a_list[:]))

print("\n###########################################")
print("##### 2.4.3 - Adding Items To A List: #####")
print("###########################################\n")

a_list = ['a']
print("The list:")
print(a_list)

print("a_list + [2.0, 3] = {0}".format(a_list + [2.0, 3]))
print("a_list.append(True) = {0}".format(a_list.append(True)))
print("a_list.extend(['Four', 'Ω']) = {0}".format(
    a_list.extend(['four', 'Ω'])))
print("a_list.insert(0, 'Ω') = {0}".format(a_list.insert(0, 'Ω')))

print("\nappend() VS extend()")

a_list = ['a', 'b', 'c']
print("The list:")
print(a_list)

print("a_list.extend(['d', 'e', 'f']) = {0}".format(
    a_list.extend(['d', 'e', 'f'])))
print("The list:")
print(a_list)

print("a_list.append(['g', 'h', 'i']) = {0}".format(
    a_list.append(['g', 'h', 'i'])))
print("The list:")
print(a_list)

print("\n###################################################")
print("##### 2.4.4 - Searching For Values In A List: #####")
print("###################################################\n")

a_list = ['a', 'b', 'new', 'mpilgrim', 'new']
print("The list:")
print(a_list)

print("a_list.count('new') = {0}".format(a_list.count('new')))
print("'new' in a_list = {0}".format('new' in a_list))
print("'c' in a_list = {0}".format('c' in a_list))
print("a_list.index('mpilgrim') = {0}".format(a_list.index('mpilgrim')))
print("a_list.index('new') = {0}".format(a_list.index('new')))
#print("a_list.index('c') = {0}".format(a_list.index('c')))
#print(a_list)

print("\n###############################################")
print("##### 2.4.5 - Removing Items From A List: #####")
print("###############################################\n")

a_list = ['a', 'b', 'new', 'mpilgrim', 'new']
print("The list:")
print(a_list)
print("a_list[1] = {0}".format(a_list[1]))
del a_list[1]
print("del a_list[1]")
print(a_list)
print("a_list[1] = {0}".format(a_list[1]))

print("a_list.remove('new')")
a_list.remove('new')
print(a_list)
print("a_list.remove('new')")
a_list.remove('new')
print(a_list)
#a_list.remove('new')
#print(a_list)

print("\n############################################################")
print("##### 2.4.6 - Removing Items From A List: Bonus Round: #####")
print("############################################################\n")

a_list = ['a', 'b', 'new', 'mpilgrim']
print("The list:")
print(a_list)
print("a_list.pop()")
print(a_list.pop())
print("a_list.pop(1)")
print(a_list.pop(1))
print(a_list)
print("a_list.pop()")
print(a_list.pop())
print("a_list.pop()")
print(a_list.pop())
print(a_list)
#print("a_list.pop()")
#print(a_list.pop())

print("\n###############################################")
print("##### 2.4.7 - Lists In A Boolean Context: #####")
print("###############################################\n")

def is_it_true(anything):
    if anything:
        print("Yes, it's True")
    else:
        print("No, it's False")

print("is_it_true([]):")
is_it_true([])
print("is_it_true(['a']):")
is_it_true(['a'])
print("is_it_true([False]):")
is_it_true([False])
