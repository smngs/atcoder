#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  // ここ後で変える
  vector<int> point;
  vector<string> name;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    // すでに言葉があったら point をインクリメント
    for (int j = 0; j < name.size(); j++) {
      if (name.at(j) == s) {
        point.at(j)++;
      }
    }

    // ない場合は追加
    name.push_back(s);
    point.push_back(1);
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    string t;
    cin >> t;

    for (int j = 0; j < name.size(); j++) {
      if (name.at(j) == t) {
        point.at(j)--;
      }
    }

    name.push_back(t);
    point.push_back(-1);
  }

  // ポイントの最大値を求める

  int max = 0;
  for (int i = 0; i < name.size(); i++) {
    if (point.at(i) > max) {
      max = point.at(i);
    }
  }

  cout << max << endl;
}
