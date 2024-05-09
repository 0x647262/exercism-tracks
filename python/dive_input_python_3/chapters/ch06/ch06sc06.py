print("\n##############################")
print("##### 6.6.0 - Generators #####")
print("##############################\n")

print('''\
def rules(rules_filename):
    with open(rules_filename, encoding='utf-8') as pattern_file:
        for line in pattern_file:
            pattern, search, replace = line.split(None, 3)
            yield build_match_apply_functions(pattern, search, replace)
''')

def rules(rules_filename):
    with open(rules_filename, encoding='utf-8') as pattern_file:
        for line in pattern_file:
            pattern, search, replace = line.split(None, 3)
            yield build_match_apply_functions(pattern, search, replace)

print('''\
def plural(noun, rules_filename='plural_rules.txt'):
    for matches_rule, apply_rule in rules(rules_filename):
        if matches_rule(noun):
            return apply_rule(noun)
    raise ValueError('No matching rule for {0}'.format(noun))
''')
def plural(noun, rules_filename='plural_rules.txt'):
    for matches_rule, apply_rule in rules(rules_filename):
        if matches_rule(noun):
            return apply_rule(noun)
    raise ValueError('No matching rule for {0}'.format(noun))

print('''\
def make_counter(x):
    print('Entering make_counter')
    while True:
        yield x
        print('Incrementing x')
        x = x + 1
''')
def make_counter(x):
    print('Entering make_counter')
    while True:
        yield x
        print('Incrementing x')
        x = x + 1

print("counter = make_counter(2)")
counter = make_counter(2)
print("counter = {0}".format(counter))
print("next(counter) = {0}".format(next(counter)))
print("next(counter) = {0}".format(next(counter)))
print("next(counter) = {0}".format(next(counter)))

print("\n#########################################")
print("##### 6.6.1 - A Fibonacci Generator #####")
print("#########################################\n")

print('''\
def fib(max):
    a, b = 0, 1
    while a < max:
        yield a
        a, b = b, a + b
''')
def fib(max):
    a, b = 0, 1
    while a < max:
        yield a
        a, b = b, a + b

print('''\
for n in fib(1000):
    print(n, end=' ')
''')
for n in fib(1000):
    print(n, end=' ')
print()
print()

print("list(fib(1000)) = {0}".format(list(fib(1000))))
