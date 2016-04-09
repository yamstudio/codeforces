#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, t;
  cin >> n >> t;
  if (n == 1 && t == 10) {
    cout << -1;
  } else {
    cout << t << string(n - 1 - (t / 10), '0');
  }
}
