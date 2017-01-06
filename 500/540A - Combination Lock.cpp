#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n, s = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    char c;
    cin >> c;
    a[i] = c - '0';
  }
  for (int i = 0; i < n; ++i) {
    char c;
    int k;
    cin >> c;
    k = abs(a[i] - (c - '0'));
    s += min(k, 10 - k);
  }
  cout << s;
}
