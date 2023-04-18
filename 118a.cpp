/**
 *    author:  lucas
 *    created: 17.04.2023 11:11:21
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  string ans;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  cout << ".";
  for (auto c : s) {
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
      ans += c;
      ans += '.';
    }
  }
  for (int i = 0; i < ans.size() - 1; i++) {
    cout << ans[i];
  }
  cout << '\n';
  return 0;
}