#include <iostream>
using namespace std;
int main() {
  long long a, b, c, d;
  cin >> a >> b >> c;
  d = b - a;
  cout << (d == 0 || (d * c > 0 && d % c == 0) ? "YES" : "NO");
}
