/**
 *    author:  lucas
 *    created: 17.04.2023 16:28:46
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b;
    cin >> a >> b;
    if (a % b == 0) {
      cout << 0 << '\n';
      continue;
    }
    cout << b - (a % b) << '\n';
  }
  return 0;
}