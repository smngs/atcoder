#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;

  Graph G(n);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;

    G.at(x-1).push_back(y-1);
    G.at(y-1).push_back(x-1);
  }

  int count = 0;

  for (int bit = 0; bit < (1 << n); bit++) {
    vector<int> habatsu;

    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        // i 番目の人が派閥に入る
        habatsu.push_back(i);
      }
    }

    // 派閥として成立するかチェック
    bool check = true;

    for (int i = 0; i < habatsu.size(); i++) {
      for (int j = i+1; j < habatsu.size(); j++) {
        // G.at(i) の vector に j が存在するか？
        bool flag = false;
        for (auto v : G.at(habatsu.at(i))) {
          if (v == habatsu.at(j)) {
            flag = true;
            break;
          }
        }

        if (flag == false) {
          check = false;
        }

      }
    }

    if (check == true && count < habatsu.size()) {
      count = habatsu.size();
    }
  }

  cout << count << endl;
}
