#include <iostream>
using namespace std;
int main() {
  int c, m, n, x, y, z;
  cin >> x >> y >> z;
  c = x + y + z;
  cin >> x >> y >> z;
  m = x + y + z;
  cin >> n;
  cout << ((c + 4) / 5 + (m + 9) / 10 <= n ? "YES" : "NO");
}
