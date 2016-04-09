#include <iostream>
using namespace std;
int main() {
  long long n, m, k;
  cin >> n >> k;
  m = (n + 1) / 2;
  if (k > m) {
    cout << 2 * k - 2 * m;
  } else {
    cout << 2 * k - 1;
  }
}
