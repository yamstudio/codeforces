#include <iostream>
using namespace std;
int main() {
  int l, p = 0;
  string s;
  cin >> l >> s;
  for (char& c : s) {
    if (c == '0') {
      ++p;
    }
  }
  cout << abs(2 * p - l);
}
