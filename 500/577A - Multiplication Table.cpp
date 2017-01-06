#include <iostream>
using namespace std;
int main() {
  int c = 0;
  unsigned n;
  unsigned long x;
  cin >> n >> x;
  for (unsigned i = 1; i <= n; ++i) {
    c += (x % i == 0);
  }
  cout << c;
}
