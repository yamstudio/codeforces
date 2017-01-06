#include <iostream>
using namespace std;
int main() {
  int n, cnt = 0, d = 0, i = 0;
  bool r = true;
  cin >> n;
  int a[n];
  for (int j = 0; j < n; ++j) {
    cin >> a[j];
  }
  while (cnt < n) {
    if (a[i] <= cnt) {
      ++cnt;
      a[i] = n;
    }
    if (i == n - 1 && r && cnt != n) {
      ++d;
      r = false;
    }
    if (i == 0 && (! r) && cnt != n) {
      ++d;
      r = true;
    }
    i += -1 + 2 * r;
  }
  cout << d;
}
