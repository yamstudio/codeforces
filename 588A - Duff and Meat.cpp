#include <iostream>
using namespace std;
int main() {
  int n, m = 101, s = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, p;
    cin >> a >> p;
    m = min(m, p);
    s += m * a;
  }
  cout << s;
}
