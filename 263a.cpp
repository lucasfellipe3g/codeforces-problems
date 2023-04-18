/**
 *    author:  lucas
 *    created: 17.04.2023 10:48:28
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int r, c;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      int n;
      cin >> n;
      if (n == 1) {
        r = i;
        c = j;
      }
    }
  }
  cout << abs(3 - r) + abs(3 - c) << '\n';
  return 0;
}