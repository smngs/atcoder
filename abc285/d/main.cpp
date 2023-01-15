#include <bits/stdc++.h>
using namespace std;

using Graph=vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
  seen[v] = true;

  for (auto next_v : G[v]) { 
    if (seen[next_v]) continue;
    dfs(G, next_v);
  }
} 

int check_num (vector<string> &memo, string s) {
  for (int i = 0; i < memo.size(); i++) {
    if (memo.at(i) == s) {
      return i;
    }
  }

  return -1;
}

int main() {
  int n;
  Graph G(n, vector<int>(n));
  vector<string> memo;
  vector<int> indeg(n, 0);

  for (int i = 0; i < n; i++) {
    string s, t;
    int n, m;

    if (check_num(memo, s) == -1) {
      memo.push_back(s);
      n = memo.size()-1;
    } else {
      n = check_num(memo, s);
    }

    if (check_num(memo, t) == -1) {
      memo.push_back(t);
      m = memo.size()-1;
    } else {
      m = check_num(memo, t);
    }

    G.at(n).push_back(m);
    indeg.at(m)++;
  }


  vector<bool> used(n, false);

  for (int v = 0; v < n; v++) {
    if (!used.at(v)){
      dfs(G, v);
    }
  }

}
