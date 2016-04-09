#include <iostream>
using namespace std;
int main() {
  unsigned long long a, b, c = 0;
  cin >> a >> b;
  while (b != 0) {
    unsigned long long t = b;
    c += a / b;
    b = a % b;
    a = t;
  }
  cout << c;
}
