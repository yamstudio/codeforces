#include <iostream>
using namespace std;
int main() {
  int n;
  bool m = false;
  cin >> n;
  while (cin >> n) {
    if (n == 1) {
      m = true;
      break;
    }
  }
  cout << (m ? -1 : 1);
}
