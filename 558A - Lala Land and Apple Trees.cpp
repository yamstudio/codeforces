#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, x, y, z = 0, r, a = 0;
  cin >> n;
  pair<int, int> t[n + 1];
  t[0] = make_pair(0, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> x >> y;
    z += (x < 0);
    t[i] = make_pair(x, y);
  }
  sort(t, t + n + 1);
  r = min(z, n - z) + 1;
  for (int i = 1; i <= r; ++i) {
    a += (z + i <= n ? t[z + i].second : 0);
    a += (z - i >= 0 ? t[z - i].second : 0);
  }
  cout << a;
}
