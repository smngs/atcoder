#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string buf = "";

  // ushiro kara miteiku

  for (int i = s.size() - 1; i >= 0; i--) {
    buf.push_back(s.at(i));
    
    if (buf == "maerd" || buf == "remaerd" || buf == "esare" || buf == "resare") {
      buf = "";
    }
  }

  if (buf == "") {
    cout << "YES" << endl;
    return 0;
  } else {
    cout << "NO" << endl;
    return 0;
  }


}
