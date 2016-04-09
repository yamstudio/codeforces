#include <iostream>
using namespace std;
int main() {
  int n, a, b;
  cin >> n;
  bool h[n + 1] = {false}, v[n + 1] = {false};
  for (int i = 1; i <= n * n; ++i) {
    cin >> a >> b;
    if (!h[a] && !v[b]) {
      h[a] = true;
      v[b] = true;
      cout << i << ' ';
    }
  }
}
