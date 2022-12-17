#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;


  bool flag=false;

  for (int i = 0; i < n; i++) {
    if (s.at(i) == '"')  {
      flag = !flag;
    }

    if (s.at(i) == ',' && flag == false) {
      s.at(i) = '.';
    }
  }

  cout << s << endl;

}
