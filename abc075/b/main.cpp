#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> s(50); // ｺﾞﾐｶｽ

  for (int j = 0; j < h; j++) {
    cin >> s.at(j);
  }

  for (int j = 0; j < h; j++) {
    for (int i = 0; i < w; i++) {
      // . のとき
      if (s.at(j).at(i) == '.') {
        int c=0;

        // 周りの地雷の数を数える
        for (int m = max(0, j-1); m <= min(h-1, j+1); m++) {
          for (int n = max(0, i-1); n <= min(w-1, i+1); n++) {
            if (s.at(m).at(n) == '#') {
              c++;
            }
          }
        }
        cout << c;
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }

}
