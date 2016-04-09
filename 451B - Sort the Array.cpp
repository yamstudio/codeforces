#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, x = 1, y;
  cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  while (x < n && a[x] < a[x + 1]) {
    ++x;
  }
  y = x;
  while (y < n && a[y] > a[y + 1]) {
    ++y;
  }
  reverse(a + x, a + y + 1);
  for (int i = 1; i < n; ++i) {
    if (a[i] > a[i + 1]) {
      cout << "no";
      return 0;
    }
  }
  cout << "yes" << endl << x << ' ' << y;
}
