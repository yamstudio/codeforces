#include <iostream>
using namespace std;
int main() {
  int n, c = 0;
  char x;
  cin >> n;
  while (cin >> x) {
    ++c;
    if (! (x - '0')) break;
  }
  cout << c;
}
