#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> s(n);
  string value;

  for (int i = 0; i < n; i++) {
    cin >> value;
    s.at(i) = value;
  }

  for (int i = n-1; i >= 0; i--){
    cout << s.at(i) << endl;
  }

}
