#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;

  double min = (double) a;
  double keika = 1;

  while (true) {
    double new_time = keika * b + (double)(a / sqrt(keika));
    if (min > new_time) {
      min = new_time;
    } else {
      break;
    }

    keika++;
  }

  cout << min << endl;
}
