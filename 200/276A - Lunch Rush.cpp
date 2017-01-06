#include <iostream>
using namespace std;
int main() {
  long n, k, f, t, m = 0;
  cin >> n >> k >> f >> t;
  m = f - max(t - k, (long)0);
  while (cin >> f >> t) {
    m = max(m, f - max(t - k, (long)0));
  }
  cout << m;
}
