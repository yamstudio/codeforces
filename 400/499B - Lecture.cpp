#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  int n, m, k;
  cin >> n >> m;
  string f, s;
  unordered_map<string, string> d;
  while (m--) {
    cin >> f >> s;
    d[f] = (f.length() <= s.length() ? f : s);
  }
  while (cin >> s) {
    cout << d[s] << ' ';
  }
}
