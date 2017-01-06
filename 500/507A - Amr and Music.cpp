#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, k, d = 0, j = 0;
  cin >> n >> k;
  pair<int, int> a[n];
  for (int i = 1; i <= n; ++i) {
    int v;
    cin >> v;
    a[i - 1] = make_pair(v, i);
  }
  sort(a, a + n);
  while (j < n && a[j].first + d <= k) {
    d += a[j].first;
    ++j;
  }
  cout << j << endl;
  for (int i = 0; i < j; ++i) {
    cout << a[i].second << ' ';
  }
}
