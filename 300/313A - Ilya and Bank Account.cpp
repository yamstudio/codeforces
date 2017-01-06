#include <iostream>
using namespace std;
int main() {
  long long n;
  cin >> n;
  if (n < 0) {
    int l2 = (-n) % 100;
    int a = l2 / 10;
    int b = l2 % 10;
    n = n / 100 * 10 - min(a, b);
  }
  cout << n;
}
