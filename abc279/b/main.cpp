#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.size() >= t.size()) {
    for (int i = 0; i < s.size(); i++) {
      if (s.at(i) == t.at(0)) {
        bool flag = true;
        for (int j = 1; j < t.size(); j++) {
          if (j + i < s.size() && s.at(i+j) == t.at(j)) {
            continue;
          } else {
            flag = false;
          }
        }

        if (flag == true) {
          cout << "Yes" << endl;
          return 0;
        } 
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
