#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  while (cin >> s) {
    string a, x, b, y;
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] >= 65 && s[i] <= 90) {
        if (i == a.length()) {
          a += s[i];
        } else {
          b += s[i];
        }
      } else {
        if (i == a.length() + x.length()) {
          x += s[i];
        } else {
          y += s[i];
        }
      }
    }
    if (b == "") {
      cout << 'R' << x << 'C';
      int n = 0;
      for (int i = 0; i < a.length(); ++i) {
        n = 26 * n + (a[i] - 'A' + 1);
      }
      cout << n;
    } else {
      int n = stoi(y), r;
      y = "";
      while (n != 0) {
        r = n % 26;
        if (! r) {
          r = 26;
          --n;
        }
        y = (char)(r - 1 + 'A') + y;
        n /= 26;
      }
      cout << y << x;
    }
    cout << endl;
  }
}
