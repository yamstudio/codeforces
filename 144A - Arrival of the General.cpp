#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int x = 0, y = 0;
  int p[101] = {0};
  for (int i = 0; i < n; ++i) {
    cin >> p[i];
    if (p[i] > p[x]) {
      x = i;
    }
    if (p[i] <= p[y]) {
      y = i;
    }
  }
  int k = x + n - 1 - y;
  if (x > y) {
    --k;
  }
  cout << k;
}
