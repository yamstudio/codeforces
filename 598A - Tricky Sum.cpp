#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long long n, s, p;
  cin >> n;
  while (cin >> n) {
    s = (1 + n) * n / 2;
    p = log2(n);
    s = s - 2 * (pow(2, p + 1) - 1);
    cout << s << endl;
  }
}
