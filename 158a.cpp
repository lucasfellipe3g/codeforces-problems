/**
 *    author:  lucas
 *    created: 17.04.2023 10:22:26
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int mx = a[k - 1];
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= mx && a[i] > 0) {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}