#include <iostream>
using namespace std;
int main() {
  int n, a = 0;
  cin >> n;
  if (n % 2 == 0) {
    a = n / 4 - (n % 4 == 0);
  }
  cout << a;
}
