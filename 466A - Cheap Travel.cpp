#include <iostream>
using namespace std;
int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  cout << n / m * min(b, a * m) + min(n % m * a, b);
}
