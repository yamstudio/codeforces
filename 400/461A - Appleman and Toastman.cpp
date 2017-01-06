#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  unsigned long long n;
  cin >> n;
  unsigned long long s = 0, a[n];
  for (unsigned long long i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (unsigned long long i = 0; i < n; ++i) {
    s += (i + 2) * a[i];
  }
  s -= a[n - 1];
  cout << s;
}
