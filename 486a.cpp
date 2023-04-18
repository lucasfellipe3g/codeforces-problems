/**
 *    author:  lucas
 *    created: 17.04.2023 14:16:13
**/
#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  i64 n;
  cin >> n;
  if (n % 2 == 1) {
    cout << -(n / 2 + 1) << '\n';
  } else {
    cout << n / 2 << '\n';
  }
  return 0;
}