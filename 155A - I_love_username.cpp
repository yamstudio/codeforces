#include <iostream>
using namespace std;
int main() {
  int n, mmin, mmax, c = 0;
  cin >> n;
  cin >> mmin;
  mmax = mmin;
  for (int i = 1; i < n; ++i) {
    int x;
    cin >> x;
    c += (x > mmax or x < mmin ? 1 : 0);
    mmax = max(mmax, x);
    mmin = min(mmin, x);
  }
  cout << c;
}
