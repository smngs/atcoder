#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  char s;
  bool isYellow = false;

  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == 'Y') {
      isYellow = true;
      break;
    }
  }

  if (isYellow) {
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }

}
