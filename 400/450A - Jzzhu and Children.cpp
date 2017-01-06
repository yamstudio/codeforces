#include <iostream>
using namespace std;
int main() {
  int m, n, a, x, r = 1;
  cin >> n >> m;
  a = n;
  for (int i = 1; i <= n; ++i) {
    cin >> x;
    if ((x + m - 1) / m >= r) {
      r = (x + m - 1) / m;
      a = i; 
    }
  }
  cout << a;
}
