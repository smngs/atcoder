#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> answer(n+1, vector<char>(n+1, '-'));

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    answer.at(b).at(a) = 'x';
    answer.at(a).at(b) = 'o';
  }
  
  for (int j = 1; j <= n; j++) {
    for (int i = 1; i <= n; i++) {
      cout << answer.at(j).at(i);
      if (i != n) {
        cout << ' ';
      }
    }
    cout << endl;
  }
}
