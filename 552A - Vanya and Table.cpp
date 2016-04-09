#include <iostream>
using namespace std;
int main() {
  int n, a, b, c, d, s = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b >> c >> d;
    s += (c - a + 1) * (d - b + 1);
  }
  cout << s;
}
