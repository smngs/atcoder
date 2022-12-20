// みかん
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> g(n+1);

  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;

    g.at(u).push_back(v);
    g.at(v).push_back(u);
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {

      auto result = find(g.at(i).begin(), g.at(i).end(), j);
      // 辺がないとき
      if (*result == 0) {
        // 辺を追加
        g.at(i).push_back(j);
        g.at(j).push_back(i);

        stack<int> s;
        vector<int> c(n+1); // すでに訪れた頂点
 
        // 頂点を塗り塗りする
        color<vector<int>> color(n+1);
        color.at(0) = -1;
        
        // DFS しながら色を塗る
        while (s.size != 0) {
          u = s.top();
          color.at(u) = 1;
          s.pop();
          c.at(u) = 1;

          for (auto v: g.at(u)) {
            if ((c.at(v) == 0) && (find(g.at(u).first, g.at(u).last, v) == false) {
              s.push(v);
              c.at(v) = 1;
              color(v) = (color(u) == 1) ? 0 : 1;
            }
          }
        }
      }
    }
  }
}
