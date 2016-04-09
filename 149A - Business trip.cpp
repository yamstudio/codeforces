#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, g = 0, c = 0, a[12];
  cin >> n;
  for (int i = 0; i < 12; ++i) {
    cin >> a[i];
  }
  sort(a, a + 12, greater<int>());
  while (g < n && c < 12) {
    g += a[c];
    ++c;
  }
  cout << (g >= n ? c : -1);
}
