/**
 *    author:  lucas
 *    created: 17.04.2023 11:45:39
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int m = 0, n = 0;
  for (auto c : s) {
    if (c >= 'a' && c <= 'z') {
      ++m;
    } else {
      ++n;
    }
  }
  if (m >= n) {
    for (auto c : s) {
      c = tolower(c);
      cout << c;
    }
    cout << '\n';
  } else {
    for (auto c : s) {
      c = toupper(c);
      cout << c;
    }
    cout << '\n';   
  }
  return 0;
}