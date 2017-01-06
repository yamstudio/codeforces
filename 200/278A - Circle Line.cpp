#include <iostream>
using namespace std;
int main() {
  int n, d = 0, s, t, m = 0;
  cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    m += a[i];
  }
  cin >> s >> t;
  for (int i = min(s, t); i < max(s, t); ++i) {
    d += a[i];
  }
  cout << min(d, m - d);
}
