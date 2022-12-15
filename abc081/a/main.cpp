#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int s2, s1, s0;

  s2 = n / 100;
  s1 = n % 100 / 10;
  s0 = n % 10;

  cout << s2 + s1 + s0 << endl;
}
