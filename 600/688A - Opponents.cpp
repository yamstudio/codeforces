#include <iostream>
using namespace std;
int main() {
  int n, d, m = 0, c = 0;
  cin >> n >> d;
  string s, f = string(n, '1');
  while (cin >> s) {
    if (s != f) {
      ++c;
      m = max(m, c);
    } else {
      c = 0;
    }
  }
  cout << m;
}
