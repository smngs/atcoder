#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int sum = 0;
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;

    if (x < (k - x)) {
      sum += 2 * x;
    } else {
      sum += 2 * (k - x);
    }
  }

  cout << sum << endl;
}
