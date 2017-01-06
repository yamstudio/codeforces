#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  pair<int, int> p[n];
  for (int i = 0; i < n; ++i) {
    cin >> p[i].first;
    p[i].second = i + 1;
  }
  sort(p, p + n);
  for (int i = 0; i < n / 2; ++i) {
    cout << p[i].second << ' ' << p[n - i - 1].second << endl;
  }
}
