#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int m=1;

  int i=1;
  for (; i <= n; i++) {
    if (2*m < m+k) {
      m *= 2;
    } else {
      break;
    }
  }

  for (; i<=n; i++) {
    m += k;
  }

  cout << m << endl;

}
