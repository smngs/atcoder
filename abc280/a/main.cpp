#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  int count = 0;
  string s;
  for (int i = 0; i < h; i++) {
    cin >> s;

    for (int j = 0; j < w; j++) {
      if (s.at(j) == '#') {
        count++;
      }
    }
  }

  cout << count << endl;
}
