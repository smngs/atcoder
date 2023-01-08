#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  for (int i = 0; i < t.size(); i++) {
    if (i != s.size() && s.at(i) != t.at(i)) {
      cout << i + 1 << endl;
      return 0;
    } else if (i == s.size()) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
