#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long n, y;
  cin >> n;
  long long a[n], m = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    y = sqrtl(a[i]);
    a[i] = (1ll * y * y == a[i] ? y : 0);
    m = max(m, a[i]);
  }
  int s[m + 1] = {0};
  s[0] = 1;
  s[1] = 1;
  for (long i = 2; i <= m; ++i) {
    if (! s[i]) {
      for (long long j = 1ll * i * i; j <= m; j += i) {
        s[j] = 1;
      }
    }
  }
  for (long i = 0; i < n; ++i) {
    cout << (! s[a[i]] ? "YES" : "NO") << endl;
  }
}
