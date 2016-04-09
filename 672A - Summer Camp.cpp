#include <iostream>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n;
  for (int i = 1; s.length() < n; ++i) {
    s += to_string(i);
  }
  cout << s[n - 1];
}
