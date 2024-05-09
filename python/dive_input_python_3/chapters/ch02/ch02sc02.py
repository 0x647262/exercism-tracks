import fractions
import math

print("\n############################")
print("##### 2.3.0 - Numbers: #####")
print("############################\n")

print("type(1) = {0}".format(type(1)))
# Should print <class 'int'>

print("isinstance(1, int) = {0}".format(isinstance(1, int)))
# Should print True

print("1 + 1 = {0}".format(1 + 1))
# Should print 2

print("1 + 1.0 = {0}".format(1 + 1.0))
# Should print 2.0

print("type(2.0) = {0}".format(type(2.0)))
# Should print <class 'float'>

print("\n###############################################################")
print("##### 2.3.1 - Coercing Integers To Floats And Vice-Versa: #####")
print("###############################################################\n")

print("2 = {0}".format(type(2)))
print("float(2) = {0}".format(type(float(2))))
# Should print <class 'int'> then <class 'float'>

print("2.0 = {0}".format(type(2.0)))
print("int(2.0) = {0}".format(type(int(2.0))))
# Should print <class 'float'> then <class 'int'>

print("int(2.5) = {0}".format(int(2.5)))
# Should print 2

print("int(-2.5) = {0}".format(int(-2.5)))
# Should print -2

print("Sting: 1.12345678901234567890")
print("Int  : {0}".format(1.12345678901234567890))
# Should truncate the number

print("type(1000000000000000) = {0}".format(type(1000000000000000)))
# Should print <class 'int'>

print("\n################################################")
print("##### 2.3.2 - Common Numerical Operations: #####")
print("################################################\n")

print("11 / 2 = {0}".format(11 / 2))
# Should print 5.5

print("11 // 2 = {0}".format(11 // 2))
# Should print 5

print("-11 // 2 = {0}".format(-11 // 2))
# Should print -6

print("11.0 // 2 = {0}".format(11.0 // 2))
# Should print 5.0

print("11.0 ** 2 = {0}".format(11 ** 2))
# Should print 121

print("11 % 2 = {0}".format(11 % 2))
# Should print 1

print("\n##############################")
print("##### 2.3.3 - Fractions: #####")
print("##############################\n")

# This is where fractions is used

x = fractions.Fraction(1, 3)
print(x)
# Should print Fraction(1, 3)

x = x * 2
print(x)
# Should print Fraction(2, 3)

print(fractions.Fraction(6, 4))
# Should print Fraction(3, 2)

#print(fractions.Fraction(0, 0))

print("\n#################################")
print("##### 2.3.4 - Trigonometry: #####")
print("#################################\n")

# This is where math is used

print("pi = {0}".format(math.pi))
# Should print 3.1415926535897931

print("sin(pi / 2) = {0}".format(math.sin(math.pi / 2)))
# Should print 1.0

print("tan(pi / 4) = {0}".format(math.tan(math.pi / 4)))
# Should print 0.99999999999999989

print("\n#################################################")
print("##### 2.3.5 - Numbers In A Boolean Context: #####")
print("#################################################\n")

def is_it_true(anything):
    if anything:
        print("Yes, it's true")
    else:
        print("No, it's false")

print("Is 1 True?")
is_it_true(1)
# Should evaulate to true

print("Is -1 True?")
is_it_true(-1)
# Should evaluate to true

print("Is 0 True?")
is_it_true(0)
# Should evaluate to false

print("Is 0.1 True?")
is_it_true(0.1)
# Should evaluate to true

print("Is 0.0 True?")
is_it_true(0.0)
# Should evaluate to false

print("Is 1/2 True?")
is_it_true(fractions.Fraction(1, 2))
# Should evaluate to true

print("Is 0/1 True?")
is_it_true(fractions.Fraction(0, 1))
# Should evaluate to false
