#include <iostream>
using namespace std;
int main() {
  int n, l;
  cin >> n;
  for (l = 1; n - l * (l + 1) / 2 >= 0; ++l) {
    n -= l * (l + 1) / 2;
  }
  cout << l - 1;
}
