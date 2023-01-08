#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> s(n+1);
  vector<int> a(n+1);

  for (int i = 1; i <= n; i++) {
    cin >> s.at(i);
    cout << s.at(i) - s.at(i-1);
    if (i != n) {
      cout << ' ';
    }
  }
  cout << endl;
}
