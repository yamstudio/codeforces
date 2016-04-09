#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, a, b;
  cin >> n;
  pair<int, int> p[n];
  for (int i = 0; i < n; ++i) {
    cin >> a >> b;
    p[i] = make_pair(a, b);
  }
  sort(p, p + n);
  for (int i = 1; i < n; ++i) {
    if (p[i].first > p[i - 1].first && p[i].second < p[i - 1].second) {
      cout << "Happy Alex";
      return 0;
    }
  }
  cout << "Poor Alex";
}
