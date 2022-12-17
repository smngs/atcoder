#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  float avg = 0;
  
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    a.push_back(input);
    avg += input;
  }

  avg = floor(avg / a.size());

  for (int i = 0; i < n; i++) {
    if (a.at(i) > avg) {
      cout << a.at(i) - avg << endl;
    } else {
      cout << avg - a.at(i) << endl;
    }
  }
}
