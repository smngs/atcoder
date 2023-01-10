#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, t;
  cin >> n >> t;

  vector<long long> a(n+1);
  long long sum = 0;

  for (int i = 1; i <= n; i++) {
    cin >> a.at(i);
    sum += a.at(i);
  }

  int amari = t % sum;
  
  for (int i = 1; i <= n; i++) {
    if (amari - a.at(i) < 0) {
      cout << i << ' ' << amari << endl;
      return 0;
    }
    amari -= a.at(i);
  }

}
