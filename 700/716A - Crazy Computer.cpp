#include <iostream>
using namespace std;

int main() {
  unsigned long n, a, b = 0, c = 0;
  cin >> n >> n;
  while (cin >> a) {
    if (a - b > n) c = 0;
    ++c;
    b = a;
  }
  cout << c;
}
