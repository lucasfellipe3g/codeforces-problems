/**
 *    author:  lucas
 *    created: 17.04.2023 10:54:43
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  vector<int> a;
  for (auto c : s) {
    if (c == '+') {
      continue;
    }
    a.push_back(c - '0');
  }
  sort(a.begin(), a.end());
  bool first = true;
  for (int i = 0; i < (int) a.size(); i++) {
    if (!first) {
      cout << '+';
    }
    cout << a[i];
    first = false;
  }
  cout << '\n';
  return 0;
}