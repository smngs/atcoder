#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> a.at(i);
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int shurui, k, x;
    cin >> shurui;

    if (shurui == 1) {
      cin >> k;
      cin >> x;
      a.at(k) = x;
    } else {
      cin >> k;
      cout << a.at(k) << endl;
    }
  }
}
