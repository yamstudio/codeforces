#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long long r, x, y, a, b;
  cin >> r >> x >> y >> a >> b;
  cout << ceil(sqrt((a - x) * (a - x) + (b - y) * (b - y)) / (2 * r));
}
