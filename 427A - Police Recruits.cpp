#include <iostream>
using namespace std;
int main() {
  int n, p = 0, e = 0, v;
  cin >> n;
  while (cin >> v) {
    e += (p == 0 and v == -1);
    p = max(0, p + v);
  }
  cout << e;
}
