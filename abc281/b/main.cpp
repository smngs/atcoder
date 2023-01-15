#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.size() == 8) {
    if ((s.at(0) >= 'A' && s.at(0) <= 'Z') && (s.at(7) >= 'A' && s.at(7) <= 'Z')) {
      int num=0;
      for (int i = 1; i <= 6; i++) {
        num += (s.at(i) - 48) * pow(10, 6-i);
      }

      if (num >= 100000 && num <= 999999) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
