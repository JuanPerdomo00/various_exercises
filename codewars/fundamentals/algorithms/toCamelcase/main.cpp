#include <cctype>
#include <iostream>

using namespace std;

string to_camel_case(string text) {
  string newStr = "";
	char upper;
  for (auto s = text.begin(); s != text.end(); s++) {
    switch (*s) {
    case '-':
    case '_':
			newStr += toupper(*++s);
			continue;
      break;
    default:
      newStr += *s;
    }
  }

  return newStr;
}

int main() {
  cout << to_camel_case("the_stealth_warrior") << endl;
  cout << to_camel_case("The-Stealth-Warrior") << endl;
  cout << to_camel_case("A-B-C") << endl;
  return 0;
}
