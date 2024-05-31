class Strings:
    def __init__(self) -> None:
        self.root: dict = {}

    def add(self, string: str) -> None:
        node: dict = self.root

        for letter in string:
            if letter not in node:
                node[letter] = {}
            node = node[letter]
        node["endOfWord"] = True

    def hasPrefix(self, prefix: str) -> bool:
        node: dict = self.root

        for letter in prefix:
            if letter not in node:
                return False
            node = node[letter]
        return True

    def has(self, string: str) -> bool:
        node: dict = self.root

        for letter in string:
            if letter not in node:
                return False
            node = node[letter]
        return "endOfWord" in node
