#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  bool f = false;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
    if ((!f) && (s[i].find("OO") + 1)) {
      s[i].replace(s[i].find("OO"), 2, "++");
      f = true;
    }
  }
  if (!f) {
    cout << "NO";
  } else {
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i) {
      cout << s[i] << endl;
    }
  }
}
