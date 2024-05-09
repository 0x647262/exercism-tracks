print("\n######################")
print("##### 2.6.0 Sets #####")
print("######################\n")

print("a_set = [1]")
a_set = {1}
print("a_set = {0}".format(a_set))
print("type(a_set) = {0}".format(a_set))
print("a_set = {1, 2}")
a_set = {1, 2}
print("a_set = {0}".format(a_set))

print()

print("We can also create a set out of a list")
print("a_list = ['a', 'b', 'mpilgrim', True, False, 42]")
a_list = ['a', 'b', 'mpilgrim', True, False, 42]
print("a_set = set(a_list)")
a_set = set(a_list)
print("a_set = {0}".format(a_set))
print("a_list = {0}".format(a_list))

print()

print("Don’t have any values yet? Not a problem. We can create an empty set.")
print("a_set = set()")
a_set = set()
print("a_set = {0}".format(a_set))
print("type(a_set) = {0}".format(a_set))
print("len(a_set) = {0}".format(len(a_set)))
print("not_sure = []")
not_sure = {}
print("type(not_sure) = {0}".format(not_sure))

print("\n#################################")
print("##### 2.6.2 Modifying A Set #####")
print("#################################\n")

print("a_set = {1, 2}")
a_set = {1, 2}
print("a_set.add(4)")
a_set.add(4)
print("a_set = {0}".format(a_set))
print("len(a_set) = {0}".format(len(a_set)))
print("a_set.add(1)")
a_set.add(1)
print("a_set = {0}".format(a_set))
print("len(a_set) = {0}".format(len(a_set)))

print()

print("a_set = {1, 2, 3}")
a_set = {1, 2, 3}
print("a_set = {0}".format(a_set))
print("a_set.update({2, 4, 6})")
a_set.update({2, 4, 6})
print("a_set = {0}".format(a_set))
print("a_set.update({3, 6, 9}, {1, 2, 3, 5, 8, 13})")
a_set.update({3, 6, 9}, {1, 2, 3, 5, 8, 13})
print("a_set = {0}".format(a_set))
print("a_set.update([10, 20, 30])")
a_set.update([10, 20, 30])
print("a_set = {0}".format(a_set))

print("\n###########################################")
print("##### 2.6.3 Removing Items From A Set #####")
print("###########################################\n")

print("a_set = {1, 3, 6, 10, 15, 21, 28, 36, 45}")
a_set = {1, 3, 6, 10, 15, 21, 28, 36, 45}
print("a_set.discard(10)")
a_set.discard(10)
print("a_set = {0}".format(a_set))
print("noop:")
print("a_set.discard(10)")
a_set.discard(10)
print("a_set = {0}".format(a_set))
print("a_set.remove(21)")
a_set.remove(21)
print("a_set = {0}".format(a_set))
#a_set.remove(21)

print()

print("a_set = {1, 3, 6, 10, 15, 21, 28, 36, 45}")
a_set = {1, 3, 6, 10, 15, 21, 28, 36, 45}
print("a_set.pop() = {0}".format(a_set.pop()))
print("a_set.pop() = {0}".format(a_set.pop()))
print("a_set = {0}".format(a_set))
print("a_set.clear()")
a_set.clear()
print("a_set = {0}".format(a_set))
#a_set.pop()

print("\n#######################################")
print("##### 2.6.4 Common Set Operations #####")
print("#######################################\n")

print("a_set = {2, 4, 5, 9, 12, 21, 30, 51, 76, 127, 195}")
a_set = {2, 4, 5, 9, 12, 21, 30, 51, 76, 127, 195}
print("30 in a_set = {0}".format(30 in a_set))
print("31 in a_set = {0}".format(31 in a_set))
print("b_set = {1, 2, 3, 5, 6, 8, 9, 12, 15, 17, 18, 21}")
b_set = {1, 2, 3, 5, 6, 8, 9, 12, 15, 17, 18, 21}
print("a_set.union(b_set):")
print(a_set.union(b_set))
print("a_set.intersection(b_set):")
print(a_set.intersection(b_set))
print("a_set.difference(b_set):")
print(a_set.difference(b_set))
print("a_set.symmetric_difference(b_set):")
print(a_set.symmetric_difference(b_set))
print("b_set.symmetric_difference(a_set)")
print(b_set.symmetric_difference(a_set))
print("\
b_set.symmetric_difference(a_set) == a_set.symmetric_difference(b_set) = \{0}"
.format(b_set.symmetric_difference(a_set) ==
        a_set.symmetric_difference(b_set)))
print("b_set.union(a_set) == a_set.union(b_set) = {0}".format(
    b_set.union(a_set) == a_set.union(b_set)))
print("b_set.intersection(a_set) == a_set.intersection(b_set) = {0}".format(
    b_set.intersection(a_set) == a_set.intersection(b_set)))
print("b_set.difference(a_set) == a_set.difference(b_set) = {0}".format(
    b_set.difference(a_set) == a_set.difference(b_set)))

print()

print("a_set = {1, 2, 3}")
a_set = {1, 2, 3}
print("b_set = {1, 2, 3, 4}")
b_set = {1, 2, 3, 4}
print("a_set.issubset(b_set) = {0}".format(a_set.issubset(b_set)))
print("b_set.issuperset(a_set) = {0}".format(b_set.issuperset(a_set)))
print("a_set.add(5) = {0}".format(a_set.add(5)))
print("a_set.issubset(b_set) = {0}".format(a_set.issubset(b_set)))
print("b_set.issuperset(a_set) = {0}".format(b_set.issuperset(a_set)))

print("\n###########################################")
print("##### 2.6.5 Sets In A Boolean Context #####")
print("###########################################\n")

def is_it_true(anything):
    if anything:
        print("Yes, it's true")
    else:
        print("No, it's false")

print("is_it_true(set()):")
is_it_true(set())
print("is_it_true({{'a'}}):")
is_it_true({'a'})
print("is_it_true({{False}}):")
is_it_true({False})
