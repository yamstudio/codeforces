#include <iostream>
using namespace std;
int main() {
  int n, m, a = 0, b = 0;
  cin >> n >> m;
  for (int i = 1; i <= 6; ++i) {
    a += (abs(i - n) > abs(i - m));
    b += (abs(i - n) < abs(i - m));
  }
  cout << b << ' ' << 6 - a - b << ' ' << a;
}
