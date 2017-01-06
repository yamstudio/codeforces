#include <iostream>
using namespace std;
int main() {
  unsigned long n, m, t, c = 1;
  long long s = 0;
  cin >> n >> m;
  for (long i = 0; i < m; ++i) {
    cin >> t;
    s += (n + t - c) % n;
    c = t;
  }
  cout << s;
}
