/**
 *    author:  lucas
 *    created: 17.04.2023 14:02:57
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] != a[i - 1]) {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}