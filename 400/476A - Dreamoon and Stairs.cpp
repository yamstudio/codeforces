#include <iostream>
using namespace std;
int main() {
  int n, m, a;
  cin >> n >> m;
  a = ((n + 1) / 2 + m - 1) / m * m;
  cout << (a > n ? -1 : a);
}
