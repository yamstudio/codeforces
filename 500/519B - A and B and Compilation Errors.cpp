#include <iostream>
using namespace std;
int main() {
  unsigned n;
  unsigned long v, a[3] = {0};
  cin >> n;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < n - i; ++j) {
      cin >> v;
      a[i] += v;
    }
  }
  cout << a[0] - a[1] << endl << a[1] - a[2];
}
