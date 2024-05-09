print("\n#######################################")
print("##### 6.5.0 - A Files Of Patterns #####")
print("#######################################\n")

print("import re")
import re

def build_match__apply_functions(pattern, search, replace):
    def matches_rule(word):
        return re.search(pattern, word)
    def apply_rule(word):
        return re.sub(search, replace, word)
    return (matches_rule, apply_rule)

rules = []
with open('plural-rules.txt', encoding='utf-8') as pattern_file:
    for line in pattern_file:
        pattern, search, replace = line.split(None, 3)
        rules.append(build_match_apply_functions(pattern, search, replace))
