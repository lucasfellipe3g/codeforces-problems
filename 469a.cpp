/**
 *    author:  lucas
 *    created: 17.04.2023 15:35:14
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  set<int> s;
  int p, q;
  cin >> p;
  for (int i = 0; i < p; i++) {
    int a;
    cin >> a;
    s.insert(a);
  }
  cin >> q;
  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;
    s.insert(a);
  }
  for (int i = 1; i <= n; i++) {
    if (!s.count(i)) {
      cout << "Oh, my keyboard!" << '\n';
      return 0;
    }
  }
  cout << "I become the guy." << '\n';
  return 0;
}