/**
 *    author:  lucas
 *    created: 17.04.2023 14:55:32
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  for (auto c : s) {
    if (c == 'H' || c == 'Q' || c == '9') {
      cout << "YES" << '\n';
      return 0;
    }
  }
  cout << "NO" << '\n';
  return 0;
}