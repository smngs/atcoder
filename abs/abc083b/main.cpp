#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int sum=0;
  for (int i = 1; i <= n; i++) {
    // 各桁の和を求める
    int digit = 0;
    int sho = i;
    while (sho != 0) {
      int amari = sho % 10;
      sho = sho / 10;
      digit += amari;
    }

    if ((a <= digit) && (digit <= b)) {
      sum += i;
    }
  }

  cout << sum << endl;
}
