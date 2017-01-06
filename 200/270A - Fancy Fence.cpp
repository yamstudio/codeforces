#include <iostream>
using namespace std;
int main() {
  int n, a;
  cin >> n;
  while (cin >> a) {
    cout << (360 % (180 - a) == 0 ? "YES" : "NO") << endl;
  }
}
