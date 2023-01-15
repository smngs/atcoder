#include <bits/stdc++.h>
using namespace std;

vector<int> keta(long long x) {
  vector<int> ans;

  while (true) {
    int num = x % 10;
    ans.push_back(num);
    x /= 10;
    if (x == 0) break;
  }

  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
  long long x;
  cin >> x;

  for (auto v: keta(x)) {
    cout << v << endl;
  }

}
