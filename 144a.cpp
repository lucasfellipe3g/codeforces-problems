/**
 *    author:  lucas
 *    created: 17.04.2023 16:07:30
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
  int mx = *max_element(a.begin(), a.end());
  int mn = *min_element(a.begin(), a.end());
  int pmax = 0;
  int pmin = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == mx) {
      pmax = i;
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == mn) {
      pmin = i;
    }
  }
  int l = 101, r = 101;
  for (int i = 0; i < n; i++) {
    if (a[i] == mx) {
      int ans = 0;
      for (int j = pmax - 1; j >= 0; j--) {
        ++ans;
      }
      l = min(l, ans);
    }
    if (a[i] == mn) {
      int res = 0;
      for (int j = pmin + 1; j < n; j++) {
        ++res;
      }
      r = min(r, res);
    }
  }
  if (pmax > pmin) {
    cout << (l + r) - 1 << '\n';
  } else {
    cout << (l + r) << '\n';
  }
  return 0;
}