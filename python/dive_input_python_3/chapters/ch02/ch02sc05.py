print("\n###########################")
print("##### 2.5.0 - Tuples: #####")
print("###########################\n")

a_tuple = ("a", "b", "mpilgrim", "z", "example")
print(a_tuple)

print("a_tuple[0] = {0}".format(a_tuple[0]))
print("a_tuple[-1] = {0}".format(a_tuple[-1]))
print("a_tuple[1:3] = {0}".format(a_tuple[1:3]))

#a_tuple.append("new")
#print(a_tuple)

#a_tuple.remove("z")
#print(a_tuple)

print("a_tuple.index(\"Example\") = {0}".format(a_tuple.index("example")))
print("\"z\" in a_tuple = {0}".format("z" in a_tuple))

print("\n################################################")
print("##### 2.5.1 - Tuples In A Boolean Context: #####")
print("################################################\n")

def is_it_true(anything):
    if anything:
        print("Yes, it's True")
    else:
        print("No, it's False")

print("is_it_true(()):")
is_it_true(())
print("is_it_true(('a', 'b')):")
is_it_true(('a', 'b'))
print("is_it_true((False, )):")
is_it_true((False, ))
print("type((False)):")
type(False)
print("type((False, )):")
type(False, )

print("\n######################################################")
print("##### 2.5.2 - Assigning Multiple Values At Once: #####")
print("######################################################\n")

v = ('a', 2, True)
print("v = ('a', 2, True)")
(x, y, z) = v
print("(x, y, z) = v")
print("x = {0}".format(x))
print("y = {0}".format(y))
print("z = {0}".format(z))

(MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY) = range(7)
print("(MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY) \
= range(7)")

print("MONDAY = {0}".format(MONDAY))
print("TUESDAY = {0}".format(TUESDAY))
print("SUNDAY = {0}".format(SUNDAY))
