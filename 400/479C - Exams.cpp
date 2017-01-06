#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, a, b, m = 0;
  cin >> n;
  pair<int, int> t[n];
  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    t[i] = make_pair(a, b);
  }
  sort(t, t + n);
  for (int i = 0; i < n; ++i) {
    m = (m <= t[i].second ? t[i].second : t[i].first);
  }
  cout << m;
}
