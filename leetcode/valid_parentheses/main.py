from collections import deque


class Solution:
    def isValid(self, s: str) -> bool:
        dq = deque([])

        for parent in s:
            if parent == "{" or parent == "[" or parent == "(":
                dq.append(parent)
            elif parent == "}" or parent == "]" or parent == ")":
                if len(dq) == 0:
                    return False
                next_p = dq.pop()
                if (
                    parent == "}"
                    and next_p != "{"
                    or parent == "]"
                    and next_p != "["
                    or parent == ")"
                    and next_p != "("
                ):
                    return False

        return len(dq) == 0


if __name__ == "__main__":
    parents = [
        "()",
        "()[]{}",
        "(]",
        "([])",
        "([)]",
        "()[{}](([])){[()[]]}",
        "[({})]{}([]{})",
        "([]){}[{}](()())",
        "{{[[(())]]}}",
        "([])[]{{()}}",
        "[{()}([]{}){{}}]",
        "([{}])([]){{[()]}}",
        "(((([])))){{{{}}}}",
        "[({[]})]()[[()()]]",
        "{[()]}[{}]({[]})",
        "([)]{}[",
        "(([])){[()]}}",
        "([]{})]({})",
        "(((([]))",
        "[{()}({}]",
        "(){([])}]",
        "((((((((((((())))))))))))",
        "[[[[[[]]]]]]}",
        "{{{{{{{{}}}}}}}}}",
        "([{}[({})]])})",
        "()[{}](([])){[()[]]}((){})",
        "(((([]))))[{}]{[{}]}(([]))",
        "[({[]})]()[[()()]]{{[]}}",
        "{[()]({[()]})}([])",
        "[{}]((){})((()))[[]]{{}}",
        "([{}])([]){{[()]}}[{}](()())",
        "{{[[(())]]}}([]{})[()]{}",
        "([])[]{{()}}[{}](){}",
        "[{()}([]{}){{}}]{{[]}}",
        "[({})]{}([]{})[()]({})",
    ]
    s = Solution()
    for parent in parents:
        if s.isValid(parent):
            print(f"parents: {parent} Is valid")
            continue
        print(f"parents: {parent} No valid")
