#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  long long sum = 0;

  for (int i = s.size() - 1; i >= 0; i--) {
    long long digit = s.at(i) - 'A' + 1;
    sum += (long long) digit * (long long) pow(26, s.size() - i - 1);
  }

  cout << sum << endl;
}
