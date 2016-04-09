#include <iostream>
using namespace std;
int main() {
  int n, s = -1;
  bool x;
  while (cin >> n) {
    x = n;
    cin >> n;
    x |= n;
    s += x;
  }
  cout << s;
}
