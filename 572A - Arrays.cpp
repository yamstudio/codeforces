#include <iostream>
using namespace std;
int main() {
  unsigned a, b, k, m;
  long long l, r, x;
  cin >> a >> b >> k >> m;
  for (unsigned i = 0; i < a; ++i) {
    cin >> x;
    if (i == k - 1) {
      l = x;
    }
  }
  for (unsigned i = 0; i < b; ++i) {
    cin >> x;
    if (i == b - m) {
      r = x;
    }
  }
  cout << (l < r ? "YES" : "NO");
}
