#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  unsigned r = 0, x, j = 0;
  unsigned long long s = 0;
  cin >> x;
  int o[x];
  while (cin >> x) {
    if (x % 2 == 0) {
      s += x;
    } else {
      o[j] = x;
      ++j;
    }
  }
  sort(o, o + j, greater<int>());
  j -= j % 2;
  for (int i = 0; i < j; ++i) {
    s += o[i];
  }
  cout << s;
}
