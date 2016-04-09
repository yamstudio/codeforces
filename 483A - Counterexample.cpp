#include <iostream>
using namespace std;
int main() {
  unsigned long long l, r;
  cin >> l >> r;
  l += l % 2;
  if (l + 2 > r) {
    cout << -1;
  } else {
    cout << l << ' ' << l + 1 << ' ' << l + 2;
  }
}
