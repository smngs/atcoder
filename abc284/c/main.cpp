#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;

void dfs(const Graph &G, int v) {
  seen.at(v) = true;

  for (auto next_v : G.at(v)) {
    if (seen.at(next_v) == true) {
      continue;
    }

    dfs(G, next_v);
  }
}


int main() {
  int n, m;
  cin >> n >> m;

  Graph G(n+1);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    G.at(u).push_back(v);
    G.at(v).push_back(u);
  }

  seen.assign(n+1, false);

  int count = 0;

  for (int i = 1; i <= n; i++) {
    if (seen.at(i) == true) {
      continue;
    } else {
      dfs(G, i);
      count++;
    }
  }

  cout << count << endl;

}
