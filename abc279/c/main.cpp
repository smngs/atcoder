#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> s(w, "");
  vector<string> t(w, "");


  for (int i = 0; i < h; i++) {
    string buf;
    cin >> buf;

    for (int j = 0; j < w; j++) {
      s.at(j).push_back(buf.at(j));
    }
  }

  for (int i = 0; i < h; i++) {
    string buf;
    cin >> buf;

    for (int j = 0; j < w; j++) {
      t.at(j).push_back(buf.at(j));
    }
  }

  // vector<bool> scomp(w, false);
  // vector<bool> tcomp(w, false);

  // for (int i = 0; i < w; i++) {
  //   if (scomp.at(i) == true) continue;
  //   for (int j = 0; j < w; j++) {
  //     if (tcomp.at(j) == true) continue;
  //     if (s.at(i) == t.at(j)) {
  //       scomp.at(i) = true;
  //       tcomp.at(j) = true;
  //       break;
  //     }
  //   }
  // }

  // bool flag=true;
  // for (int i = 0; i < w; i++) {
  //   if (scomp.at(i) == false || tcomp.at(i) == false) {
  //     flag = false;
  //   }
  // }

  // if (flag == true) {
  //   cout << "Yes" << endl;
  //   return 0;
  // } else {
  //   cout << "No" << endl;
  //   return 0;
  // }

  // sort sureba yoi

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());


  for (int i = 0; i < w; i++) {
    if (s.at(i) != t.at(i)) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;

}
