#include <iostream>
using namespace std;
int main() {
  int n, p, a = 0, x;
  cin >> n;
  p = n;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (x) {
      a += 1 + (i - p == 2);
      p = i;
    }
  }
  cout << a;
}
