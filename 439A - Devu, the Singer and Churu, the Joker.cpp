#include <iostream>
using namespace std;
int main() {
  int n, d, s = 0, k;
  cin >> n >> d;
  while (cin >> k) {
    s += k;
  }
  if (n * 10 + s - 10 <= d) {
    cout << (d - s) / 5;
  } else {
    cout << -1;
  }
}
