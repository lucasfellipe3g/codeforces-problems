/**
 *    author:  lucas
 *    created: 17.04.2023 11:19:30
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < (int) s.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}