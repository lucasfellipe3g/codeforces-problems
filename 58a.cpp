/**
 *    author:  lucas
 *    created: 17.04.2023 13:26:39
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  string ans = "";
  map<char, int> m;
  bool ok = false;
  for (auto c : s) {
    if (c == 'h') {
      ok = true;
    }
    if (ok) {
      if (c == 'h' && !m[c]) {
        ans += 'h';
        m[c] = 1;
      }
      else if (c == 'e' && !m[c] && m['h']) {
        ans += 'e';
        m[c] = 1;
      }
      else if (c == 'l' && m[c] < 2 && m['e']) {
        ans += 'l';
        m[c] += 1;
      }
      else if (c == 'o' && !m[c] && m['l'] >= 2) {
        ans += 'o';
        m[c] = 1;
      }
    }
  }
  if (ans == "hello") {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n'; 
  }
  return 0;
}