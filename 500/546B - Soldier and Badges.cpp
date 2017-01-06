#include <iostream>
using namespace std;
int main() {
  int n, s = 0;
  cin >> n;
  int a[2 * n] = {0};
  while (cin >> n) {
    while (a[n]) {
      ++n;
      ++s;
    }
    a[n] = 1; 
  }
  cout << s;
}
