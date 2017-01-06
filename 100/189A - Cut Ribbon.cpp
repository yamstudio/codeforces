#include <iostream>
using namespace std;
int main() {
  int n, a[3] = {0};
  cin >> n >> a[0] >> a[1] >> a[2];
  int b[n + 1];
  b[0] = 0;
  for (int i = 1; i <= n; ++i) {
     b[i] = -1;
    for (int j = 0; j < 3; ++j) {
      if (i - a[j] >= 0 && b[i - a[j]] >= 0) {
        b[i] = max(b[i], b[i - a[j]] + 1);
      }
    }
  }
  cout << b[n];
}
