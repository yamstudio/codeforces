#include <iostream>
using namespace std;
int main() {
  int a[5], b;
  bool p = false;
  for (int i = 0; i < 5; ++i) {
    cin >> a[i];
    b += a[i];
  }
  if ((b % 5 == 0) && (b != 0)) {
    cout << b / 5;
  } else {
    cout << -1;
  }
}
