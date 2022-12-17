#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s;
  cin >> n >> s;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  vector<int> p(n);

  for (int j = 0; j < n; j++) {
    cin >> p.at(j);
  }

  int c=0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a.at(i) + p.at(j) == s) {
        c++;
      }
    }
  }

  cout << c << endl;

}
