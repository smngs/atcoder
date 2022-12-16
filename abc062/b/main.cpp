#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  
  vector<string> a(100); // ここ動的確保できるか試す（多分無理）

  for (int j = 0; j < h; j++) {
    cin >> a.at(j);
  }

  for (int i = 0;  i < w+2;  i++) {
    cout << '#';
  }
  cout << endl;

  for (int j = 0; j < h; j++) {
    cout << '#';
    cout << a.at(j);
    cout << '#';
    cout << endl;
  }

  for (int i = 0;  i < w+2;  i++) {
    cout << '#';
  }
  cout << endl;
}
