/**
 *    author:  lucas
 *    created: 17.04.2023 14:19:00
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  cout << fixed << setprecision(12);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += x;
  }
  cout << sum / (n * 1.) << '\n';
  return 0;
}