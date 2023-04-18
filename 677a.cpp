/**
 *    author:  lucas
 *    created: 17.04.2023 13:07:16
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, h;
  cin >> n >> h;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x <= h) {
      ans += 1;
    } else {
      ans += 2;
    }
  }
  cout << ans << '\n';
  return 0;
}