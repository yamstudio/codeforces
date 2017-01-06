#include <iostream>
using namespace std;
int main() {
  int r, c, sr = 0, sc = 0;
  cin >> r >> c;
  char x;
  bool nr[r + 1] = {false}, nc[c + 1] = {false};
  for (int i = 1; i <= r; ++i) {
    for(int j = 1; j <= c; ++j) {
      cin >> x;
      if (x == 'S') {
        if (! nr[i]) {
          nr[i] = true;
          ++sr;
        }
        if (! nc[j]) {
          nc[j] = true;
          ++sc;
        }
      }
    }
  }
  cout << r * c - sr * sc;
}
