// 未完
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> g(n+1, vector<int>(n+1));

  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    g.at(max(u, v)).at(min(u, v)) = 2;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << g.at(j).at(i);
    }
    cout << endl;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      if (g.at(max(i, j).at(min(i, j))) == 0) {
        // 追加してみる
        
      }

    }
  }


}

