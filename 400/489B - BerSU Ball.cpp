#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, m, c = 0;
  cin >> n;
  int a[n] = {0};
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  cin >> m;
  int b[m] = {0};
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + m);
  for (int i = 0, j = 0; i < n && j < m;) {
    if (a[i] - 1 > b[j]) ++j;
    else if (b[j] - 1 > a[i]) ++i;
    else {
      ++c;
      ++i;
      ++j;
    }
  }
  cout << c;
}
