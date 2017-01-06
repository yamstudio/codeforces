#include <iostream>
using namespace std;
int main() {
  int n, k, c = 0;
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;
    c += (p <= 5 - k);
  }
  cout << c / 3;
}
