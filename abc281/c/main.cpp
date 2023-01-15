#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, t;
  cin >> n >> t;

  vector<int> a(n+1);
  long long sum=0;
  for (int i = 1; i < n+1; i++) {
    cin >> a.at(i);
    sum += a.at(i);
  }

  t %= sum;
  for (int i = 1; i < n+1; i++) {
    if (t - a.at(i) >= 0) {
      t -= a.at(i);
    } else {
      cout << i << ' ' << t << endl;
      return 0;
    }
  }
}
