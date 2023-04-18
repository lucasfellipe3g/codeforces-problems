/**
 *    author:  lucas
 *    created: 17.04.2023 09:59:06
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if ((int) s.size() > 10) {
      cout << s[0] << s.size() - 2 << s.back() << '\n';
      continue;
    }
    cout << s << '\n';
  } 
  return 0;
}