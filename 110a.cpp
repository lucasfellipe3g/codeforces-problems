/**
 *    author:  lucas
 *    created: 17.04.2023 12:32:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int count = 0;
  for (auto c : s) {
    if (c == '4' || c == '7') {
      count++;
    }
  }
  if (count == 4 || count == 7) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}