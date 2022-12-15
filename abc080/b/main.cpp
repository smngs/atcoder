#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int m=n;
  int sum=0;

  while (m != 0) {
    sum += m % 10;
    m = m / 10;
  }

  if (n % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
