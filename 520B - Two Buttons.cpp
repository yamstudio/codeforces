#include <iostream>
using namespace std;
int main() {
  int n, m, a = 0;
  cin >> n >> m;
  while (n != m) {
    if (n > m) {
      --n;
    } else {
      if (m % 2 == 0) {
        m /= 2;
      } else {
        ++m;
      }
    }
    ++a;
  }
  cout << a;
}
