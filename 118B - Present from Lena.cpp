#include <iostream>
using namespace std;
int main() {
  int n, x;
  cin >> n;
  for (int i = 0; i <= 2 * n; ++i) {
    x = min(i, 2 * n - i);
    for (int j = 0; j < n - x; ++j) {
      cout << "  ";
    }
    for (int j = 0; j <= 2 * x; ++j) {
      cout << min(j, 2 * x - j);
      if (j != 2 * x) {
        cout << ' ';
      }
    }
    if (i != 2 * n) {
      cout << '\n';
    }
  }
}
