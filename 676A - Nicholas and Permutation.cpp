#include <iostream>
using namespace std;
int main() {
  int n, po = 0, pn = 0, x;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    cin >> x;
    if (x == 1) po = i;
    if (x == n) pn = i;
    if (po && pn) break;
  }
  cout << max(max(po, pn) - 1, n - min(po, pn));
}
