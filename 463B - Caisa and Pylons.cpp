#include <iostream>
using namespace std;
int main() {
  int n, c = 0, p = 0, d = 0;
  cin >> n;
  int a[n + 1] = {0};
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    d = a[i + 1] - a[i];
    if (d > p) {
      c += d - p;
      a[i] += d - p;
    }
    p -= a[i + 1] - a[i];
    
  }
  cout << c;
}
