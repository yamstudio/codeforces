#include <iostream>
using namespace std;
int main() {
  int n, m = 0, start, mstart = 0, mend = 0, zero = 0, one = 0;
  cin >> n;
  int a[n] = {0};
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (a[i] == 1) {
      zero = max(0, zero - 1);
      ++one;
    } else {
      if (zero == 0) {
        start = i;
      }
      ++zero;
    }
    if (zero > m) {
      m = zero;
      mstart = start;
      mend = i;
    }
  }
  for (int i = mstart; i <= mend; ++i) {
    one += 1 - 2 * a[i];
  }
  cout << one;
}
