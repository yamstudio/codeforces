#include <iostream>
#include <algorithm>

using namespace std;

bool mycomp(const pair<int, int>& a, const pair<int, int>& b) {
  return a.first > b.first;
}

int main() {
  int n, x, ls = 0, lr = 0;
  cin >> n;
  pair<int, int> a[n + 1];
  int s[n + 1];
  a[0] = make_pair(2001, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> x;
    a[i] = make_pair(x, i);
  }
  sort(a, a + n + 1, mycomp);
  for (int i = 1; i <= n; ++i) {
    if (a[i].first == ls) {
      s[a[i].second] = lr;
    } else {
      s[a[i].second] = i;
      ls = a[i].first;
      lr = i;
    }
  }
  for (int i = 1; i <= n; ++i) {
    cout << s[i] << ' ';
  }
}
