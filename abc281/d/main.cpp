#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n, k, d;
  cin >> n >> k >> d;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  int max = -1;

  for (int bit = 0; bit < (1 << n); bit++) {
    long long sum = 0;
    int bit_num = 0;

    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        sum += a.at(i);
        bit_num += 1;
      }
    }

    if (bit_num <= k && sum != 0 && sum % d == 0 && sum >= max) {
      max = sum;
    }
  }

  cout << max << endl;
}
