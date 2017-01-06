#include <iostream>
using namespace std;
int main() {
  int n, m = 0, v, c[3] = {0}, s[3][5001];
  cin >> n;
  for (int i = 1; i <= n; ++i) {
      cin >> m;
      s[m - 1][c[m - 1]++] = i;
  }
  v = min(c[0], min(c[1], c[2]));
  cout << v << endl;
  for (int i = 0; i < v; ++i) {
    cout << s[0][i] << ' ' << s[1][i] << ' ' << s[2][i] << endl;
  }
}
