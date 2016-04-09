#include <iostream>
using namespace std;
int main() {
  int n, s = 0;
  cin >> n;
  for (int i = 5; n > 0; --i) {
    s += n / i;
    n = n % i;
  }
  cout << s;
}
