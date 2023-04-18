/**
 *    author:  lucas
 *    created: 17.04.2023 12:42:54
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int t = 0;
  int mx = (int) -1e9;
  while (n--) {
    int a, b;
    cin >> a >> b;
    t -= a;
    t += b;
    if (t > mx) {
      mx = t;
    }
  }
  cout << mx << '\n';
  return 0;
}