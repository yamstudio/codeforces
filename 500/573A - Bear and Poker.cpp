#include <iostream>
using namespace std;
int main() {
  long long n, d = 0;
  cin >> n;
  while (cin >> n) {
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    if (! d) d = n;
    if (d != n) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}
