#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long num[100001] = {0}, m = 0;
  for (int i = 0; i < n; ++i) {
    long long k;
    cin >> k;
    ++num[k];
    m = max(m, k);
  }
  long long d[m + 1] = {0};
  d[1] = num[1];
  for (int i = 2; i <= m; ++i) {
    d[i] = max(d[i - 1], d[i - 2] + num[i] * i);
  }
  cout << d[m];
}
