/**
 *    author:  lucas
 *    created: 17.04.2023 14:23:33
**/
#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  i64 n, k;
  cin >> n >> k;
  if (n % 2 == 1) {
    ++n;
  }
  if (k <= n / 2) {
    cout << k + (k - 1) << '\n';
  } else {
    cout << (k - (n / 2)) * 2 << '\n';
  }
  return 0;
}