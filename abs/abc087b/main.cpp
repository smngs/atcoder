#include <bits/stdc++.h>
using namespace std;

int main() {
  // 愚直な全探索で良い，変な工夫はいらない（一敗）
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  int count = 0;

  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        int sum = i * 500 + j * 100 + k * 50;
        if (sum == x) count++;
      }
    }
  }

  cout << count << endl;

}
