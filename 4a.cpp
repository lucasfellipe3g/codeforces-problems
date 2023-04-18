/**
 *    author:  lucas
 *    created: 17.04.2023 09:56:31
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int w;
  cin >> w;
  cout << (w > 2 and w % 2 == 0 ? "YES" : "NO") << '\n';
  return 0;
}