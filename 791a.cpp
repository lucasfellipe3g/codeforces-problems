/**
 *    author:  lucas
 *    created: 17.04.2023 11:22:26
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  int ans = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    ++ans;
  }
  cout << ans << '\n';
  return 0;
}