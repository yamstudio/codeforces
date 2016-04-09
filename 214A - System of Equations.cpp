#include <iostream>
using namespace std;
int main() {
  int a, b, n, m, c = 0;
  cin >> n >> m;
  for (a = 0; a * a <= n; ++a) {
    b = n - a * a;
    if (b * b + a == m) {
      ++c;
    }
  }
  cout << c;
}
