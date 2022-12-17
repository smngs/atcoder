#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> s;

  for (int j = 0; j < n; j++) {
    string input;
    cin >> input;
    s.push_back(input);
  }

  int count=0;

  bool flag=true;

  for (int j = 0; j < n; j++) {
    for (int k = j+1; k < n; k++) {
      for (int i = 0; i < m; i++) {
        if ((s.at(j).at(i) == 'x') && (s.at(k).at(i) == 'x')) {
          flag = false;
        }
      }
      if (flag == true) {
        count++;
      }
      flag = true;
    }
  }

  cout << count << endl;
}
