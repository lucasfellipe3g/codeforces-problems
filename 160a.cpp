/**
 *    author:  lucas
 *    created: 17.04.2023 13:48:50
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());
  int sum = accumulate(a.begin(), a.end(), 0) / 2;
  int ans = 0;
  int i = 0;
  while (ans <= sum) {
    ans += a[i];
    ++i;
  }
  cout << i << '\n';
  return 0;
}