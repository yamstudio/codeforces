#include <iostream>
using namespace std;
int main() {
  int s, m = -1, x, y;
  cin >> s >> s;
  while (cin >> x >> y) {
    if (100 * s >= 100 * x + y) {
      m = max(m, (100 * s) % (100 * x + y) % 100);
    }
  }
  cout << m;
}
