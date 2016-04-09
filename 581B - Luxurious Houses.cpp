#include <iostream>
using namespace std;
int main() {
  int n, m = 0;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = n - 1; i >= 0; --i) {
    b[i] = max(0, m - a[i] + 1);
    m = max(m, a[i]);
  }
  for (int i = 0; i < n; ++i) {
    cout << b[i] << ' ';
  }
}
