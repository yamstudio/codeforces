#include <iostream>
using namespace std;
int main() {
  long long n, xc = 1, nc = 1, mmax = 0, mmin = 0, x, w;
  cin >> n;
  cin >> x;
  mmax = x;
  mmin = x;
  while (cin >> x) {
    if (x == mmax) {
      ++xc;
    } else if (x > mmax) {
      mmax = x;
      xc = 1;
    }
    if (x == mmin) {
      ++nc;
    } else if (x < mmin) {
      mmin = x;
      nc = 1;
    }
  }
  w = (mmax == mmin ? n * (n - 1) / 2 : xc * nc);
  cout << mmax - mmin << ' ' << w;
}
