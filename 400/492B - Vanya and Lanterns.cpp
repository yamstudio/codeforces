#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
  int n;
  long long l, m = 0;
  cin >> n >> l;
  long long a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a, a + n);
  m = max(a[0], l - a[n - 1]) * 2;
  for (int i = 1; i < n; ++i) {
    m = max(a[i] - a[i - 1], m);
  }
  cout << fixed << setprecision(10) << m / 2.0;
}
