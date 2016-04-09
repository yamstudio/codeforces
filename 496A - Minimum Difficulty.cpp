#include <iostream>
using namespace std;
int main() {
  int n, x, y;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  x = a[1] - a[0];
  y = a[2] - a[0];
  for (int i = 2; i < n; ++i) {
    x = max(a[i] - a[i - 1], x);
    y = min(a[i] - a[i - 2], y);
  }
  cout << max(x, y);
}
