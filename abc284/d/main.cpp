#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    unsigned long long n;
    cin >> n;

    // p, q を求めん
    // vector<bool> isprime(n+1, true);
    // isprime.at(1) = false;

    for (unsigned long long l = 2; l <= n; l++) {
      // if (isprime.at(l) == false) {
      //   continue;
      // }

      // for (long m = l * 2; m <= n ; m += l) {
      //   isprime.at(m) = false;
      // }

      if ((n % (l * l)) == 0) {
        unsigned long long p = l;
        unsigned long long q = n / (l * l);
        cout << p << " " << q << endl;
        break;
      }
    }
  }
}
