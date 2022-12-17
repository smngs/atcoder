#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> mochi;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    mochi.push_back(d);
  }

  sort(mochi.begin(), mochi.end(), greater<int>());

  int count = 1;

  for (int i = 1; i < n; i++) {
    if (mochi.at(i) != mochi.at(i-1)) {
      count++;
    }
  }

  cout << count << endl;
}
