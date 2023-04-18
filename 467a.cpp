/**
 *    author:  lucas
 *    created: 17.04.2023 14:00:29
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    int p, q;
    cin >> p >> q;
    if (q - p >= 2) {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}