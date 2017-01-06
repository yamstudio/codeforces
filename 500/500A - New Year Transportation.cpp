#include <iostream>
using namespace std;
int main() {
  int n, d, c;
  cin >> n >> d;
  --d;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  while (c < d) {
    c += a[c];
  }
  if (c == d) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
