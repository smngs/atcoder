#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  vector<int> hoge(100000, 0);
  cin >> s;

  int kakko=0;

  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) >= 'a' && s.at(i) <= 'z') {
      if (hoge.at((int) s.at(i)) == 0) {
        hoge.at((int) s.at(i)) = 1;
      } else {
        // 気を失う
        cout << "No" << endl;
        return 0;
      }
    } else if (s.at(i) == '(')  {
      kakko = i;
    } else if( s.at(i) == ')' ){
      for (int j = kakko + 1; j <= i-1; j++) {
        hoge.at((int) s.at(j)) = 0;
      }
    }
  }

  cout << "Yes" << endl;
}
