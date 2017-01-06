#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  int x, t = 0, f = 0;
  bool s = true;
  cin >> x;
  while (cin >> x && s) {
    if (x == 25) {
      ++t;
    } else if (x == 50) {
      ++f;
      if (t >= 1) {
        --t;
      } else {
        s = false;
      }
    } else {
      if (t >= 1 && f >= 1) {
        --t;
        --f;
      } else if (t >= 3) {
        t -= 3;
      } else {
        s = false;
      }
    }
  }
  cout << (s ? "YES" : "NO");
}
