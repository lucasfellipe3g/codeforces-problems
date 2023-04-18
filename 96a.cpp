/**
 *    author:  lucas
 *    created: 17.04.2023 11:54:34
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  char prev = '-';
  int count = 0;
  for (auto c : s) {
    char current = c;
    if (current == prev) {
      ++count;
    } else {
      count = 1;
    }
    if (count == 7) {
      cout << "YES" << '\n';
      return 0;
    }
    prev = c;
  }
  cout << "NO" << '\n';
  return 0;
}