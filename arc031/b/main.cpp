#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> next_hop(int x, int y, int h, int w) {
  vector<vector<int>> next_hop;
  if (x != 0) {
    next_hop.push_back({x-1, y});
  }
  if (y != 0) {
    next_hop.push_back({x, y-1});
  }
  if (x != h-1) {
    next_hop.push_back({x+1, y});
  }
  if (y != w-1) {
    next_hop.push_back({x, y+1});
  }

  return next_hop;
}

int main() {
  vector<vector<int>> map(10, vector<int>(10));

  vector<int> start;
  bool is_start = true;

  for (int i = 0; i < 10; i++) {
    string a;
    cin >> a;

    for (int j = 0; j < 10; j++) {
      if (a.at(j) == 'x') {
        map.at(i).at(j) = 0;
      } else {
        map.at(i).at(j) = 1;
      }

      if ((is_start == true) && (map.at(i).at(j) == 1)) {
        start = {i, j};
      }

    }
  }

  // 埋め立ての候補を探す
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (map.at(i).at(j) == 0) {
        // 埋め立て
        map.at(i).at(j) = 1;

        // スタックと訪問済み頂点の初期化
        stack<vector<int>> s;
        vector<vector<int>> c(10, vector<int>(10));
        s.push(start);
        c.at(start.at(0)).at(start.at(1)) = 1;

        // DFS
        while (s.size() != 0) {
          vector<int> v = s.top();
          s.pop();

          int x = v.at(0);
          int y = v.at(1);

          c.at(x).at(y) = 1;

          for (vector<int> w: next_hop(x, y, 10, 10)) {
            int l = w.at(0);
            int m = w.at(1);

            if (c.at(l).at(m) == 0 && map.at(l).at(m) == 1) {
              s.push({l, m});
              c.at(l).at(m) = 1;
            }
          }
        }

        if (c == map) {
          cout << "YES" << endl;
          return 0;
        }

        map.at(i).at(j) = 0;
      }

    }
  }

  cout << "NO" << endl;
}
