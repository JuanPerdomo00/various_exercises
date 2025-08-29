#include <deque>
#include <iostream>
#include <string>

using namespace std;

bool valid_braces(const string &braces) {
  deque<char> dq;

  for (auto parent : braces) {
    switch (parent) {
    case '{':
    case '[':
    case '(':
      dq.push_back(parent);
      break;
    case '}':
    case ']':
    case ')':
      if (dq.empty()) {
        return false;
      }

      char next_p = dq.back();
      dq.pop_back();

      if (parent == '}' && next_p != '{' || parent == ']' && next_p != '[' ||
          parent == ')' && next_p != '(') {
        return false;
      }
    }
  }
  return dq.empty();
}

int main() {
  cout << valid_braces("()") << endl;
  cout << valid_braces("(]") << endl;
  cout << valid_braces("(}") << endl;

  return 0;
}
