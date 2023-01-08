#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  double s = abs((double) (xb-xa)*(yc-ya)-(yb-ya)*(xc-xa))/2;
  printf("%.1f\n", s);
}
