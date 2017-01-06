#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  unsigned n, m, k, c = 0;
  cin >> n >> m >> k;
  int a[m + 1];
  for (int i = 0; i < m + 1; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < m; ++i) {
    int d = a[i] ^ a[m];
    string r = "";
    while (d != 0) {
      r = (d % 2 == 0 ? '0' : '1') + r;
      d /= 2;
    }
    if (count(r.begin(), r.end(), '1') <= k) {
      ++c;
    }
  }
  cout << c;
}
