/**
 *    author:  lucas
 *    created: 17.04.2023 10:01:02
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    int s = a + b + c;
    if (s > 1) {
      ans += 1;
    }
  }
  cout << ans << '\n';
  return 0;
}