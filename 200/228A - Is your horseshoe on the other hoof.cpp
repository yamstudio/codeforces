#include <iostream>
#include <iterator>
#include <set>
using namespace std;
int main() {
  int c[4];
  cin >> c[0] >> c[1] >> c[2] >> c[3];
  set<int> s{begin(c), end(c)};
  cout << 4 - s.size();
}
