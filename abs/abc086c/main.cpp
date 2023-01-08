#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> t(n+1);
  vector<int> x(n+1);
  vector<int> y(n+1);

  t.at(0) = 0;
  x.at(0) = 0;
  y.at(0) = 0;

  for (int i = 1; i <= n; i++) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
  }

  for (int i = 0; i < n; i++) {
    int kyori = abs(x.at(i+1) - x.at(i)) + abs(y.at(i+1) - y.at(i));
    int length_t = t.at(i+1) - t.at(i);

    if (kyori > length_t) {
      cout << "No" << endl;
      return 0;
    } else {
      if (kyori % 2 == length_t % 2) {
        continue;
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;

}
