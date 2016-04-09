#include <iostream>
using namespace std;
int main() {
  string a, b, s;
  int x[26] = {0}, y[26] = {0};
  cin >> a >> b >> s;
  for (char& c : a) {
    x[c - 65] += 1;
  }
  for (char& c : b) {
    x[c - 65] += 1;
  }
  for (char& c : s) {
    y[c - 65] += 1;
  }
  for (int i = 0; i < 26; ++i) {
    if (x[i] != y[i]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}
