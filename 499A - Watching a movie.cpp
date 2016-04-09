#include <iostream>
using namespace std;
int main() {
  int x, c = 1, a = 0, l, r;
  cin >> x >> x;
  while (cin >> l >> r) {
    while (c + x <= l) {
      c += x;
    }
    a += r - c + 1;
    c = r + 1;
  }
  cout << a;
}
