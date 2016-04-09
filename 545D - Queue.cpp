#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, t = 0, c = 0;
  cin >> n;
  unsigned long a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < n; ++i) {
    if (a[i] >= t) {
      ++c;
      t += a[i];
    }
  }
  cout << c;
}
