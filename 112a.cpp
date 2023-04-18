/**
 *    author:  lucas
 *    created: 17.04.2023 10:52:46
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string a, b;
  cin >> a >> b;
  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(b.begin(), b.end(), b.begin(), ::tolower);
  if (a > b) {
    cout << 1 << '\n';
  } else if (a < b) {
    cout << -1 << '\n';
  } else {
    cout << 0 << '\n';
  }
  return 0;
}