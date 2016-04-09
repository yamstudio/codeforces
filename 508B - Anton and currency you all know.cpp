#include <iostream>
using namespace std;
int main() {
  string s;
  int l, d = -1, c, n;
  cin >> s;
  l = s[s.length() - 1] - '0';
  for (int i = s.length() - 1; i >= 0; --i) {
    c = s[i] - '0';
    if ((! (c % 2)) && (d == -1 || c < l)) {
      d = i;
      n = c;
    }
  }
  if (d == -1) {
    cout << d;
  } else {
    s[d] = l + '0';
    s[s.length() - 1] = n + '0';
    cout << s;
  }
}
