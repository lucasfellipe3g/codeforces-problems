/**
 *    author:  lucas
 *    created: 17.04.2023 15:07:24
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> a(4);
  for (int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    if (a[i] == a[i + 1]) {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}