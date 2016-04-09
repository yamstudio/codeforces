#include <iostream>
using namespace std;
int main() {
  int n;
  char c;
  cin >> n;
  bool b[n + 2][n + 2];
  for (int i = 0; i <= n + 1; ++i) {
    for (int j = 0; j <= n + 1; ++j) {
      if (i == 0 || i == n + 1 || j == 0 || j == n + 1) {
         b[i][j] = false;
      } else {
        cin >> c;
        b[i][j] = (c == 'o');
      }
    }
  }
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (b[i - 1][j] ^ b[i][j - 1] ^ b[i + 1][j] ^ b[i][j + 1]) {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";
}
