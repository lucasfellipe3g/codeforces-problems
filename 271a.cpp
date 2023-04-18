/**
 *    author:  lucas
 *    created: 17.04.2023 13:09:53
**/
#include <bits/stdc++.h>

using namespace std;

void solve(int y) {
  while (y < 9048) {
    ++y;
    int c = y;
    set<int> s;
    while (c) {
      s.insert(c % 10);
      c /= 10;
    }
    if ((int) s.size() == 4) {
      cout << y << '\n';
      break;
    }
  }
  ++y;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int y;
  cin >> y;
  solve(y);
  return 0;
}