/**
 *    author:  lucas
 *    created: 17.04.2023 13:36:22
**/
#include <bits/stdc++.h>

using namespace std;

vector<int> numbers = {4, 7, 44, 47, 74, 77, 444, 777, 474, 447, 774, 747 };

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int c = 0;
  int am = 0;
  int m = n;
  while (m) {
    if (m % 10 == 4 || m % 10 == 7) {
      ++c;
    }
    m /= 10;
    ++am;
  }
  if (c == am) {
    cout << "YES" << '\n';
  } else {
    for (int i = 0; i < (int) numbers.size(); i++) {
      if (n % numbers[i] == 0) {
        cout << "YES" << '\n';
        return 0;
      }
    }
    cout << "NO" << '\n';
  }
  return 0;
}