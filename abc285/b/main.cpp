#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;
  vector<vector<int>> memo(n+1, vector<int>(n+1, -1));

  for (int i = 1; i < n; i++) {
    int max_l = 0;
    for (int l = 1; l <= n - i; l++) {
      bool flag = true;
      for (int k = 1; k <= l; k++) {
        int value = memo.at(k-1).at(k+i-1);
        if (value == -1) {
          bool ans = (s.at(k-1) == s.at(k + i - 1)) ? true : false;
          if (ans == true) {
            memo.at(k-1).at(k+i-1) = 1;
            flag = false;
            break;
          } else {
            memo.at(k-1).at(k+i-1) = 0;
          }
        } else if (value == 1) {
          flag = false;
          break;
        }
      }

      if (flag == true) {
        max_l = l;
      }
    }

    cout << max_l << endl;
  }
}
