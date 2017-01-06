#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, k, a = 0;
  cin >> n >> k;
  int p[n];
  for (int i = 0; i < n; ++i) {
    cin >> p[i];
  }
  sort(p, p + n, greater<int>());
  for (int i = 0; i < n; i += k) {
    a += p[i] - 1;
  }
  cout << 2 * a;
}
