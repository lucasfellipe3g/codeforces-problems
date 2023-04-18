/**
 *    author:  lucas
 *    created: 17.04.2023 14:06:26
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    --p[i];
    a[p[i]] = i + 1;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " \n"[i + 1 == a.size()];
  }
  return 0;
}