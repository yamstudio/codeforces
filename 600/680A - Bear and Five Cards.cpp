#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int a[5], s = 0, m = 0, c = 0;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
    s += a[i];
  }
  sort(a, a + 5, greater<int>());
  for (int i = 0; i < 4; ++i) {
    c = max(c, a[i]);
    if (a[i] == a[i + 1] && c < 3 * a[i]) {
      c += a[i];
    } else {
      c = 0;
    }
    m = max(m, c);
  }
  cout << s - m;
}
