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
  int h, w;
  cin >> h >> w;

  vector<string> map;
  vector<int> start;

  vector<vector<int>> c(h, vector<int>(w, 0)); // すでに訪れた頂点
  stack<vector<int>> s;

  for (int i = 0; i < h; i++) {
    string input;
    cin >> input;
    map.push_back(input);

    for (int j = 0; j < w; j++) {
      if (input.at(j) == 's') {
        // 始点として設定
        s.push({i, j});
        c.at(i).at(j) = 1;
      }
    }
  }

  while(s.size() != 0) {
    vector<int> v = s.top();
    s.pop();

    int x = v.at(0);
    int y = v.at(1);
    
    for (vector<int> w: next_hop(x, y, h, w)) {
      int i = w.at(0);
      int j = w.at(1);

      if (c.at(i).at(j) == 0 && map.at(i).at(j) != '#') {
        s.push({i, j});
        c.at(i).at(j) = 1;
      }
      
      if (map.at(i).at(j) == 'g') {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
