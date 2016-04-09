#include <iostream>
using namespace std;
int main() {
  int n, r[2] = {0};
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int a;
    cin >> a;
    r[a % 2] += 1;
    if ((r[a % 2] == 1) && (r[(a + 1) % 2] != 0)) {
      if (r[(a + 1) % 2] == 1) {
        int t;
        cin >> t;
        cout << (t % 2 == a % 2? i - 1: i);
      } else {
        cout << i;
      }
      return 0;
    }
  }
}
