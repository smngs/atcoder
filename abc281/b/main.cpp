#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.size() < 7) {
    cout << "No" << endl;
    return 0;
  }

  bool flag = true;

  if ((s.at(0) >= 'A' && s.at(0) <= 'Z') && (s.at(6) >= 'A' && s.at(6) <= 'Z') && (s.at(1) >= '1' && s.at(1) <= '9')) {
    for (int i = 1; i < 6; i++) {
      if (s.at(i) < '0' || s.at(i) > '9') {
        flag = false;
      }
    }

    if (flag == true) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
