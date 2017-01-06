#include <iostream>
using namespace std;
int main() {
  int n, h, w;
  cin >> w >> h;
  while (cin >> n) {
    w += (n > h);
  }
  cout << w;
}
