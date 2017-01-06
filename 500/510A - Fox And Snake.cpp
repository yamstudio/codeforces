#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  cin >> m;
  string h = string(m, '#'), l = '#' + string(m - 1, '.'), r = string(m - 1, '.') + '#';
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0) {
      cout << h << endl;
    } else if (i % 4 == 3) {
      cout << l << endl;
    } else {
      cout << r << endl;
    }
  }
}
