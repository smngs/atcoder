#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ptr=0;
  int count=0;

  bool last=false;

  while (ptr < s.size()) {
    // これは対策
    if (ptr + 1 == s.size()) {
      count++;
      ptr++;
    } else if (s.at(ptr) == '0' && s.at(ptr+1) == '0') {
      count++;
      ptr += 2;
      last = true;
    } else {
      count++;
      ptr++;
      last=false;
    }
  }

  int n = s.size();

  cout << count << endl;
}
