#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n=4;
  vector<int> num(n);
  for (int i = 0; i < n; i++) {
    num.at(i) = s.at(3-i) - '0';
  }

  vector<int> op(n-1);
  for (int bit = 0; bit < (1 << 3); ++bit) {
    for (int i = 0; i < 3; ++i) {
      if (bit & (1 << i)) {
        op.at(i) = 1;
      } else {
        op.at(i) = 0;
      }
    }

    int sum = 0;
    char op2, op1, op0;
    if (op.at(2) == 1) {
      sum = num.at(3) + num.at(2);
      op2 = '+';
    } else {
      sum = num.at(3) - num.at(2);
      op2 = '-';
    }

    if (op.at(1) == 1) {
      sum += num.at(1);
      op1 = '+';
    } else {
      sum -= num.at(1);
      op1 = '-';
    }

    if (op.at(0) == 1) {
      sum += num.at(0);
      op0 = '+';
    } else {
      sum -= num.at(0);
      op0 = '-';
    }

    if (sum == 7) {
      cout << num.at(3) << op2 << num.at(2) << op1 << num.at(1) << op0 << num.at(0) << "=7" << endl;
      return 0;
    }
  }
}
