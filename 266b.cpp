/**
 *    author:  lucas
 *    created: 17.04.2023 12:50:44
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  while (k > 0) {
    for (int i = 0; i < (int) s.size(); i++) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        swap(s[i], s[i + 1]);
        ++i;
      }
    }
    k -= 1;
  }
  cout << s << '\n';
  return 0;
}