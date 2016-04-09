#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  float n, s = 0.0, j;
  cin >> n;
  while (cin >> j) {
    s+= j;
  }
  cout << fixed << setprecision(12) << s / n;
}
