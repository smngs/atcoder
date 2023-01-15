#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int num=0;
  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == 'v') {
      num++;
    } else if (s.at(i) == 'w') {
      num = num + 2;
    }
  }

  cout << num << endl;
}
