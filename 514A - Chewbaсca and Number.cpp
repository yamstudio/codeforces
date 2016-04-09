#include <iostream>
using namespace std;
int main() {
  int x;
  char c;
  cin >> c;
  x = c - '0';
  cout << (x > 4 && x < 9 ? 9 - x : x);
  while (cin >> c) {
    x = c - '0';
    cout << min(x, 9 - x);
  }
}
