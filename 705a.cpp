/**
 *    author:  lucas
 *    created: 17.04.2023 15:03:51
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  if (n == 1) {
    cout << "I hate it" << '\n';
  } else {
    for (int i = 1; i <= n; i++) {
      if (i == n) {
        cout << (n % 2 == 0 ? "I love it" : "I hate it") << '\n';
      } else {
        cout << (i % 2 == 1 ? "I hate that" : "I love that") << " ";
      }
    }
  }
  return 0;
}