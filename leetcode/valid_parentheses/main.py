class Stack:
    def __init__(self):
        self._elements: List[Any] = []

    def insert(self, item: Any):
        self._elements.append(item)

    def is_empty(self):
        return len(self._elements) == 0

    def remove(self):
        if self.is_empty():
            print("Empty Stack")
            return None
        return self._elements.pop()


class Solution:
    def isValid(self, s: str) -> bool:
        p = Stack()
        for ss in s:
            if ss == "{" or ss == "[" or ss == "(":
                p.insert(ss)

            if ss == "}" or ss == "]" or ss == ")":
                if p.is_empty():
                    return False
                m = p.remove()
                if (
                    (m == "{" and ss != "}")
                    or (m == "[" and ss != "]")
                    or (m == "(" and ss != ")")
                ):
                    return False

        return p.is_empty()

