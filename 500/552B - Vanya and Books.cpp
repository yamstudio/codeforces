#include <iostream>
using namespace std;
int main() {
  unsigned long long n, a = 0;
  cin >> n;
  for (unsigned long long i = 1; i <= n; i *= 10) {
    a += n - i + 1;
  }
  cout << a;
}
