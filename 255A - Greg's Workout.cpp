#include <iostream>
using namespace std;
int main() {
  int n, a[3] = {0}, m = 0, mi, i = 0;
  string s[3] = {"chest", "biceps", "back"};
  cin >> n;
  while (cin >> n) {
    a[i] += n;
    if (a[i] > m) {
      m = a[i];
      mi = i;
    }
    i = (i + 1) % 3;
  }
  cout << s[mi];
}
