#include <iostream>
using namespace std;

int main() {
  int m, c, w = 0, l = 0;
  cin >> m;
  while (cin >> m >> c) {
    w += m > c;
    l += m < c;
  }
  cout << (w == l ? "Friendship is magic!^^" : (w > l ? "Mishka" : "Chris"));
}
