/**
 *    author:  lucas
 *    created: 17.04.2023 10:05:09
**/
#include <bits/stdc++.h>

using namespace std;

using i64 = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  i64 n, m, a;
  cin >> n >> m >> a;
  cout << ((n + a - 1) / a) * ((m + a - 1) / a) << '\n'; 
  return 0;
}