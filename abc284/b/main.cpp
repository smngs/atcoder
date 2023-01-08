#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int count=0;

    long long value;
    for (int j = 0; j < n; j++) {
      cin >> value;
      if (value % 2 == 1) {
        count++;
      }
    }

    cout << count << endl;
  }
}
