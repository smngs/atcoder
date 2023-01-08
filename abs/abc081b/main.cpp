#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  int count = 0;
  while (true) {
    bool flag = false;
    for (int i = 0; i < n; i++) {
      if (a.at(i) % 2 != 0) {
        flag = true;
        break;
      }
    }

    if (flag == true) {
      break;
    } else {
      count++;
    }

    for (int i = 0; i < n; i++) {
      a.at(i) /= 2;
    }

  }

  cout << count << endl;

}
