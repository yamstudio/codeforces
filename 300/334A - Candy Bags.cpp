#include <iostream>
using namespace std;
int main() {
  int n, i = 1, k, s;
  cin >> n;
  k = n;
  s = n * n + 1;
  while (k--) {
    int m = n / 2;
    while (m--) {
      cout << i << ' ' << s - i << ' ';
      ++i;
    }
    cout << endl;
  }
}
