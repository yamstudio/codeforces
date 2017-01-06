#include <iostream>
using namespace std;
int main() {
  bool levels[101] = {false};
  int n, x, y;
  cin >> n;
  cin >> x;
  for (int i = 1; i <= x; ++i) {
    int l;
    cin >> l;
    levels[l] = true;
  }
  cin >> y;
  for (int i = 1; i <= y; ++i) {
    int l;
    cin >> l;
    levels[l] = true;
  }
  for (int i = 1; i <= n; ++ i) {
    if (! levels[i]) {
      cout << "Oh, my keyboard!";
      return 0;
    }
  }
  cout << "I become the guy.";
}
