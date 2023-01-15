#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (
    (a == 1 && b == 2)
    || (a == 1 && b == 3)
    || (a == 2 && b == 4)
    || (a == 2 && b == 5)
    || (a == 3 && b == 6)
    || (a == 3 && b == 7)
    || (a == 4 && b == 8)
    || (a == 4 && b == 9)
    || (a == 5 && b == 10)
    || (a == 5 && b == 11)
    || (a == 6 && b == 12)
    || (a == 6 && b == 13)
    || (a == 7 && b == 14)
    || (a == 7 && b == 15)
    ) {
    cout << "Yes" << endl;
    return 0;
  } else {
    cout << "No" << endl;
    return 0;
  }
}
