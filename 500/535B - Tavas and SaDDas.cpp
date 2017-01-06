#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n, a = 0, d, i = 1, t = 1;
  cin >> n;
  while (true) {
    d = n % (t * 10) / t;
    if (! d) break;
    a += (1 + (d == 7)) * i;
    i *= 2;
    t *= 10;
  }
  cout << a;
}
