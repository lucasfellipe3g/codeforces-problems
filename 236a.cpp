/**
 *    author:  lucas
 *    created: 17.04.2023 11:08:15
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string a;
  cin >> a;
  set<char> s;
  for (auto c : a) {
    s.insert(c);
  }
  if (s.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << '\n';
  } else {
    cout << "IGNORE HIM!" << '\n';
  }
  return 0;
}