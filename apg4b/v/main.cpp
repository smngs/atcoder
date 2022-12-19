#include <bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children, int x) {
  if (children.at(x).size() == 0) {
    return 0;
  } else {
    int max = 0;
    // 子要素の処理時間の最大値に対して 1 を足して返す
    for (int c : children.at(x)) {
      int time = complete_time(children, c);
      if (max < time) {
        max = time;
      }
    }

    return max+1;
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

  vector<vector<int>> children(n);
  for (int i = 1; i < n; i++) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }

  cout << complete_time(children, 0) << endl;

}
