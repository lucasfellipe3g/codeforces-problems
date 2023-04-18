/**
 *    author:  lucas
 *    created: 17.04.2023 12:31:14
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int x = 0, y = 0;
  for (auto c : s) {
    if (c == 'A') {
      ++x;
    } else {
      ++y;
    }
  }
  if (x > y) {
    cout << "Anton" << '\n';
  } else if (x < y) {
    cout << "Danik" << '\n';
  } else {
    cout << "Friendship" << '\n';
  }
  return 0;
}