#include <iostream>
using namespace std;
int main() {
  int n, m, k, a = 0, x;
  cin >> n >> m >> k;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (x / 2) {
      if (k) {
        --k;
      } else if (m) {
        --m;
      } else {
        ++a;
      }
    } else {
      if (m) {
        --m;
      } else {
        ++a;
      }
    }
  }
  cout << a;
}
