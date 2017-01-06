#include <iostream>
using namespace std;
int main() {
  long long n, x, d, s = 0;
  char c;
  cin >> n >> x;
  while (n--) {
    cin >> c >> d;
    if (c == '-') d = -d;
    if (x + d < 0) {
      ++s;
    } else {
      x += d;
    }
  }
  cout << x << ' ' << s;
}
