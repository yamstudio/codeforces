#include <iostream>
using namespace std;
int main() {
  int n, x, s = 0;
  cin >> n >> x;
  while (cin >> n) {
    s += n;
  }
  cout << abs(s) / x + (s % x != 0);
}
