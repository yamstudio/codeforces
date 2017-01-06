#include <iostream>
using namespace std;
int main() {
  int x, y, s;
  cin >> x >> y >> s;
  x = abs(x);
  y = abs(y);
  if (s >= x + y && (s - x - y) % 2 == 0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
