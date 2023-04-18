/**
 *    author:  lucas
 *    created: 17.04.2023 12:02:07
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  while (k > 0) {
    int r = n % 10;
    if (r != 0) {
      n -= 1;
    } else if (r == 0) {
      n /= 10;
    }
    k--;
  }
  cout << n << '\n';
  return 0;
}