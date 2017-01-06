#include <iostream>
using namespace std;
int main() {
  int n, m, c = 0;
  cin >> n >> m;
  bool t[m + 1] = {false};
  while (cin >> n) {
    while (n--) {
      int x;
      cin >> x;
      if (! t[x]) {
        t[x] = true;
        ++c;
      }
    }
    if (c == m) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}
