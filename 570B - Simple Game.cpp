#include <iostream>
using namespace std;
int main() {
  unsigned long n, a;
  cin >> n >> a;
  cout << (n == 1 ? 1 : a + (n - a > a - 1) - (n - a <= a - 1));
}
