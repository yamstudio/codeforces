#include <iostream>
using namespace std;
int main() {
  int n, cnt = 0, curr = 0, a = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int h, m, t;
    cin >> h >> m;
    t = 100 * h + m;
    if (t == curr) {
      ++cnt;
    } else {
      cnt = 1;
      curr = t;
    }
    a = max(a, cnt);
  }
  cout << a;
}
