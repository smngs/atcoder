#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int c_min=pow(10, 9);

  for (int i = 0; i < n; i++) {
    int c=0;
    int a;
    cin >> a;

    while (a % 2 == 0) {
      c++;
      a /= 2;
    }

    if (c < c_min) {
      c_min = c;
    }
  }

  cout << c_min << endl;
}
