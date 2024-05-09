print("\n######################################")
print("##### 3.5.0 - Set Comprehensions #####")
print("######################################\n")

print("a_set = set(range(10))")
a_set = set(range(10))
print(a_set)
print("{{x ** 2 for x in a_set}} = {0}".format(
    {x ** 2 for x in a_set}))
print("{{x ** 2 for x in a_set}} = {0}".format(
    {x for x in a_set if x % 2 ==0}))
print("{{x ** 2 for x in a_set}} = {0}".format(
    {2 ** x for x in range(10)}))
