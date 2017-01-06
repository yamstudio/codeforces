#include <iostream>
using namespace std;
int main() {
  int f = 0, z = 0, n, x;
  cin >> n;
  while (cin >> x) f += (x == 5);
  z = n - f;
  f /= 9;
  if (! z) {
    cout << -1;
  } else {
    cout << string(f * 9, '5') << string((f ? z : 1), '0');
  }
}
