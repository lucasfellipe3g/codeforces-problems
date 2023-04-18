/**
 *    author:  lucas
 *    created: 17.04.2023 15:43:05
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a, b, c;
  cin >> a >> b >> c;
  cout << max({a + b + c, (a + b) * c, (a * b) + c, a + (b * c), a * (b + c), a * b * c}) << '\n';
  return 0;
}