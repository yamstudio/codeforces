#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  int l, h = 0, c = 0;
  unordered_map<int, int> m;
  cin >> l;
  while (cin >> l) {
    if (! m[l]++) {
      ++c;
    }
    h = max(h, m[l]);
  }
  cout << h << ' ' << c;
}
