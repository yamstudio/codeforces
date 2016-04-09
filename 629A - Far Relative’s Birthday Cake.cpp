#include <iostream>
using namespace std;
int main() {
  int n, a = 0, cnt = 0;
  char c;
  cin >> n;
  bool b[n][n];
  for (int i = 0; i < n; ++i) {
    cnt = 0;
    for (int j = 0; j < n; ++j) {
      cin >> c;
      b[i][j] = (c == 'C');
      cnt += b[i][j];
    }
    if (cnt > 1) a += (cnt) * (cnt - 1) / 2;
  }
  for (int i = 0; i < n; ++i) {
    cnt  = 0;
    for (int j = 0; j < n; ++j) {
      if (b[j][i]) ++cnt;
    }
    if (cnt > 1) a += (cnt) * (cnt - 1) / 2;
  }
  cout << a;
}
