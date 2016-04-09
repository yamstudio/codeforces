#include <iostream>
using namespace std;
int main() {
  int a[4], s = 0;
  char c;
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  while (cin >> c) {
    s += a[c - '1'];
  }
  cout << s;
}
