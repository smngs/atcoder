#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> num(s.size());
  for (int i = 0; i < s.size(); i++) {
    num.at(i) = s.at((s.size() - 1) - i) - '0';
  }

  vector<int> op(num.size() - 1);
  int n = op.size();
  long long sum = 0;

  for (int bit = 0; bit < (1 << n); ++bit) {
    for (int i = n-1; i >= 0; --i) {
      if (bit & (1 << i)) {
        op.at(i) = 1;
      } else {
        op.at(i) = 0;
      }
    }

    queue<int> s;

    for (int i = n-1; i >= 0; i--) {
      s.push(num.at(i+1));

      if (op.at(i) == 1) {
        while (s.size() != 0) {
          sum += s.front() * pow(10, s.size() - 1);
          s.pop();
        }
      }
    }
    s.push(num.at(0));
    while (s.size() != 0) {
      sum += s.front() * pow(10, s.size() - 1);
      s.pop();
    }
  }
  cout << sum << endl;
}
