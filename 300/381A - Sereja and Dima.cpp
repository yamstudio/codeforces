#include <iostream>
using namespace std;
int main() {
  int l = 0, r, s[2] = {0};
  bool b;
  cin >> r;
  int a[r];
  for (int i = 0; i < r; ++i) {
    cin >> a[i];
  }
  --r;
  while (l <= r) {
    if (a[l] > a[r]) {
      s[b] += a[l];
      ++l;
    } else {
      s[b] += a[r];
      --r;
    }
    b = ! b;
  }
  cout << s[0] << ' ' << s[1];
}
