/**
 *    author:  lucas
 *    created: 17.04.2023 14:53:12
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < (int) a.size(); i++) {
    if (a[i] != b[i]) {
      cout << "1";
    } else {
      cout << "0";
    }
  }
  cout << '\n';
  return 0;
}