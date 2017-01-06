#include <iostream>
using namespace std;
int main() {
  int l[10] = {0}, n, g;
  bool a = false;
  while (cin >> n) {
    ++l[n];
    if (l[n] == 4) {
      g = n;
      a = true;
    }
  }
  if (!a) {
    cout << "Alien";
  } else {
    l[g] -= 4;
    for (int i = 1; i <= 9; ++i) {
      if (l[i] == 1) {
        cout << "Bear";
        return 0;
      }
    }
    cout << "Elephant";
  }
}
