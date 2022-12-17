#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> a(h+1, vector<char>(w+1));

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> a.at(i).at(j);
    }
  }

  // 消されるべき
  vector<bool> h_tbd(h+1, false);
  vector<bool> w_tbd(w+1, false);

  // h を走査
  for (int i = 1; i <= h; i++) {
    int count = 0;
    for (int j = 1; j <= w; j++) {
      if (a.at(i).at(j) == '.') {
        count++;
      }
    }

    if (count == w) {
      h_tbd.at(i) = true;
    }
  }

  // w を走査
  for (int j = 1; j <= w; j++) {
    int count = 0;
    for (int i = 1; i <= h; i++) {
      if (a.at(i).at(j) == '.') {
        count++;
      }
    }

    if (count == h) {
      w_tbd.at(j) = true;
    }
  }

  // 出力
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (h_tbd.at(i) == false && w_tbd.at(j) == false) {
        cout << a.at(i).at(j);
      }
    }
    if (h_tbd.at(i) == false) {
      cout << endl;
    }
  }

}
