#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int a=1;

  for (int i = 1; i < s.size(); i=i+2) {
    if (s.at(i) == '+') {
      a++;
    } else {
      a--;
    }
  }

  cout << a << endl;
}
