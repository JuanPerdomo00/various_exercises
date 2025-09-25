#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  string yes_or_no = (n % 2 == 0) && (n > 2) ? "YES" : "NO";
  cout << yes_or_no;
  return 0;
}