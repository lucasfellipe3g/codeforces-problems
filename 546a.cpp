/**
 *    author:  lucas
 *    created: 17.04.2023 11:25:10
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int k, n, w;
  cin >> k >> n >> w;
  // He wants w bananas
  // He has 17 dollars
  // k dollars for the first banana, 2 * k for the second banana, ..., n * k for the n-th banana
  int total = 0;
  int x = k;
  while (x > 0) {
    total += (k * x);
    x -= 1;
  } 
  x = w;
  int pay = 0;
  while (w > 0) {
    pay += (k * w);
    w -= 1;
  }
  if (n >= pay) {
    cout << 0 << '\n';
  } else {
    cout << pay - n << '\n';
  }
  return 0;
}