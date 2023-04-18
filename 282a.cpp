/**
 *    author:  lucas
 *    created: 17.04.2023 10:36:32
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    string s;
    cin >> s;
    if (s[1] == '+') {
      ++ans;
    } else {
      --ans;
    }
  }
  cout << ans << '\n';
  return 0;
}