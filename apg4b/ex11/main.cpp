#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n;
  cin >> a;

  char op;
  int b;

  for (int i = 1; i <= n; i++) {
    cin >> op;
    cin >> b;

    if (op == '+') {
      a = a + b;
    } else if (op == '-') {
      a = a - b;
    } else if (op == '*') {
      a = a * b;
    } else {
      if (b == 0) {
        cout << "error" << endl;
        break;
      } else {
        a = a / b;
      }
    }
    cout << i << ':' << a << endl;
  }
}
