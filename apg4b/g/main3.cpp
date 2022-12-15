#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  if (!(x == y)) {
    cout << "xとyは等しくない" << endl;
  }

  if (x == 10 && y == 10) {
    cout << "xとyは10" << endl;
  }

  if (x == 0 || y == 0) {
    cout << "xかyは0" << endl;
  }

  cout << "終了" << endl;
}
