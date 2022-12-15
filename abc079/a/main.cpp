#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int s3, s2, s1, s0;

  s3 = n / 1000;
  s2 = n % 1000 / 100;
  s1 = n % 100 / 10;
  s0 = n % 10;

  if ((s3 == s2 && s2 == s1) || (s2 == s1 && s1 == s0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
