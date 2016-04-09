#include <iostream>
#include <unordered_map>;
using namespace std;
int main() {
  int n, m, c = 0;
  unordered_map<int, bool> p;
  cin >> n >> m;
  int a[n], b[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = n - 1; i >= 0; --i) {
    if (! p[a[i]]) {
      p[a[i]] = true;
      ++c;
    }
    b[i] = c;
  }
  while (cin >> m) {
    cout << b[m - 1] << endl;
  }
}
