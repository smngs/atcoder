#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long>> factorize(long long n) {
  vector<pair<long long, long long>> fact;
  vector<int> sieve(n+1, true);

  cout << sqrt(n) + 1 << endl;
  for (long long i = 2; i <= sqrt(n) + 1; i++) {
    if (sieve.at(i) && n % i == 0) {
      fact.push_back({i, 0});
      sieve.at(i) = false;

      while (n % i == 0) {
        n /= i;
        fact.back().second++;
      }

      for (int j = 2 * i; j <= n; j += i) {
        sieve.at(j) = false;
      }

      if (n == 1) break;
    }
  }

  if (fact.empty()) {
    fact.push_back({n, 1});
  }

  return fact;
}

int main() {

  for (int i = 2; i < 20; i++) {
    for (auto v: factorize((long long) i)) {
      cout << v.first << ' ' << v.second << endl;
    }
    cout <<  endl;
  }

}
