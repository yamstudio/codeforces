#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int l, r, a[s.size() + 1] = {0}, k = 0;
  cin >> l;
  for (int i = 1; i < s.size(); ++i) {
    k += (s[i] == s[i - 1]);
    a[i + 1] = k;
  }
  while (cin >> l) {
    cin >> r;
    cout << a[r] - a[l] << endl;
  }
}
