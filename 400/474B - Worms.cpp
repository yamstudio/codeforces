#include <iostream>
using namespace std;
int main() {
  unsigned long n, x, curr = 0, a[1000001] = {0};
  cin >> n;
  for (unsigned long i = 1; i <= n; ++i) {
    cin >> x;
    while (x--) {
      a[++curr] = i;
    }
  }
  cin >> x;
  while (cin >> x) {
    cout << a[x] << endl;
  }
}
