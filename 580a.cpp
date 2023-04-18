/**
 *    author:  lucas
 *    created: 17.04.2023 17:22:28
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
  int curr = a[0];
  int mx = 1;
  int c = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] >= curr) {
      c++;
    } else {
      c = 1;
    }
    mx = max(mx, c);
    curr = a[i];
  }
  cout << mx << '\n';
  return 0;
}