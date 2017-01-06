#include <iostream>
using namespace std;
int main() {
  int n;
  bool c = true;
  cin >> n;
  cout << n * n / 2 + (n % 2) << endl;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << (c ? 'C' : '.');
      c = !c;
    }
    if (n % 2 == 0) c = !c;
    if (i < n - 1) cout << endl;
  }
}
