#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<long long, int> node;

long long operator-(const node& a, const node& b) {
  return a.first - b.first;
}

int main() {
  int n;
  cin >> n;
  node a[n];
  pair<long long, long long> b[n];
  for (int i = 0; i < n; ++i) {
    long long v;
    cin >> v;
    a[i] = make_pair(v, i);
  }
  sort(a, a + n);
  b[a[0].second] = make_pair(a[1] - a[0], a[n - 1] - a[0]);
  b[a[n - 1].second] = make_pair(a[n - 1] - a[n - 2], a[n - 1] - a[0]);
  for (int i = 1; i < n - 1; ++i) {
    b[a[i].second] = make_pair(min(a[i + 1] - a[i], a[i] - a[i - 1]), max(a[i] - a[0], a[n - 1] - a[i]));
  }
  for (int i = 0; i < n; ++i) {
    cout << b[i].first << ' ' << b[i].second << endl;
  }
}
