#include <iostream>
using namespace std;
int main() {
  int x1, y1, x2, y2, lx = 0, ly = 0;
  cin >> x1 >> y1 >> x2 >> y2;
  lx = abs(x1 - x2);
  ly = abs(y1 - y2);
  if (lx == ly) {
    cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1;
  } else if (!lx) {
    if (x1 + ly > 1000) {
      ly = -ly;
    }
    cout << x1 + ly << ' ' << y1 << ' ' << x2 + ly << ' ' << y2;
  } else if (!ly) {
    if (y1 + lx > 1000) {
      lx = -lx;
    }
    cout << x1 << ' ' << y1 + lx << ' ' << x2 << ' ' << y2 + lx;
  } else {
    cout << -1;
  }
}
