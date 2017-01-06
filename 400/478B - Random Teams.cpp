#include <iostream>
using namespace std;
int main() {
  unsigned long long n, m, r, k;
  cin >> n >> m;
  k = n / m;
  r = n % m;
  cout << (m * k + 2 * r - m) * k / 2 << ' ' << (n - m + 1) * (n - m) / 2;
}
