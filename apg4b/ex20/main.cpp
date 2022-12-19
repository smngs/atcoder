#include <bits/stdc++.h>
using namespace std;

int count_children(vector<vector<int>> &children, int x) {
  if (children.size() == 0) {
    return 1;
  } else {
    // 自分の子要素の数をカウント

    int count = 0;
    for (int c : children.at(x)) {
      count += count_children(children, c);
    }

    return count + 1;
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> p(n);
  p.at(0) = -1;

  for (int i = 1; i < n; i++) {
    cin >> p.at(i);
  }

  // i 番目の組織の直下にある子要素の vector<int> をつくる
  vector<vector<int>> children(n);

  for (int i = 1; i < n; i++) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }
  
  for (int i = 0; i < n; i++) {
    cout << count_children(children, i) << endl;
  }
}
