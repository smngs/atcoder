#include <bits/stdc++.h>
using namespace std;

// わかんなかったので答えを見た．
// まず ``完全に解く" やつを決める．つまりボーナス点を含めた点数がでかいやつから完全に解いていく．
// 最後に（超えそうになったら）中途半端に解くやつを決める．

int solve_max_point(&vector<int> point_all, int sum, int g) {
  int max = -1;
  int arg_max = -1;

  for (int i = 0; i < point_all.size(); i++) {
    if point_all.at(i) > max {
      max = point_all.at(i);
      arg_max = i;
    }
  }

  if (sum + max > g) {
    return max
  } else {
    vector<int> point_new = point_all.erase(point_all.begin() + arg_max);
    solve_max_point(point_new, sum + max, g);
  }


}

int main() {
  int d, g;
  cin >> d >> g;
  
  vector<int> p(d);
  vector<int> c(d);

  for (int i = 0; i < d; i++) {
    cin >> p.at(i);
    cin >> c.at(i);
  }

  // i 番目の問題を完全に解いたときの点数を求める
  vector<int> point_all(d);
  for (int i = 0; i < d; i++) {
    point_all.at(i) = (i+1) * 100 * p.at(i) + c.at(i);
  }

  max = solve_max_point(point_all, 0, g);
}
