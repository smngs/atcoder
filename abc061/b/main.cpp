#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  // これで多次元配列，初期化はいらない
  vector<vector<int>> road(100, vector<int>(100));

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    road.at(a).at(b)++;
  }

  for (int i = 1; i <= n; i++) {
    int c=0;
    // 横に足す
    for (int j = 1; j <= n; j++) {
      c += road.at(i).at(j);
      c += road.at(j).at(i);
    }    

    cout << c << endl;
  }

}
