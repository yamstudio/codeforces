#include <iostream>
using namespace std;
int main() {
  int n, h[31], a[31], c = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> h[i] >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (h[i] == a[j]) {
        ++c;
      }
    }
  }
  cout << c;
}
