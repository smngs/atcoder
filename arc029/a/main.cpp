#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> t;
  int v;
  for (int i = 0; i < n; i++) {
    cin >> v;
    t.push_back(v);
  }

  int min_time = 100;

  for (int bit = 0; bit < (1 << n); bit++) {
    int a_time = 0;
    int b_time = 0;

    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        a_time += t.at(i);
      } else {
        b_time += t.at(i);
      }
    }

    if ((a_time > b_time) && (a_time < min_time)) {
      min_time = a_time;
    } else if ((b_time > a_time) && (b_time < min_time)) {
      min_time = b_time;
    }
  }

  cout << min_time << endl;
}
