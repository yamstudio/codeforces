#include <iostream>
using namespace std;
int main() {
  unsigned m, s;
  cin >> m >> s;
  if ((s == 0 && m > 1) || s > 9 * m) {
    cout << "-1 -1";
    return 0;
  }
  unsigned d[m] = {0};
  d[0] = (s > 0);
  s -= d[0];
  for (int i = m - 1; i >= 0 && s > 0; --i) {
    d[i] += min((unsigned) 9, s);
    s -= d[i];
  }
  for (int i = 0; i < m; ++i) {
    cout << d[i];
  }
  cout << ' ';
  for (int i = m - 1; i > 0; --i) {
    if (d[i] != 9) {
      ++d[i];
      d[0] = 0;
      break;
    }
  }
  for (int i = m - 1; i >= 0; --i) {
    cout << d[i];
  }
}
