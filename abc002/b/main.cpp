#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;

  string s="";

  for (int i = 0; i < w.size(); i++) {
    if (w.at(i) == 'a' || w.at(i) == 'i' || w.at(i) == 'u' || w.at(i) == 'e' || w.at(i) == 'o') {
      continue;
    } else {
      s.push_back(w.at(i));
    }
  }

  cout << s << endl;

}
