#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;

  vector<int> a;
  a.push_back(-1);

  for (int i = 1; i <= n; i++) {
    int input;
    cin >> input;
    a.push_back(input);
  }

  // わかんなかった．
  // ボタンを押してって，count が n を越したらループしているものとみなせばよし
  
  int index = 1;
  int value = a.at(1);
  int count = 0;

  while (index != 2) {
    index = value;
    value = a.at(index);
    count++;

    if (count > n+1) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << count << endl;

}
