#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int v[n + 1] = {0};
  for (int i = 0; i < m; ++i) {
    int w = 0, wi = 1;
    for (int j = 1; j <= n; ++j) {
      int p;
      cin >> p;
      if (p > w) {
        w = p;
        wi = j;
      }
    }
    ++v[wi];
  }
  int w = 0, wi = 1;
  for (int i = 1; i <= n; ++i) {
    if (v[i] > w) {
      w = v[i];
      wi = i;
    }
  }
  cout << wi;
}
