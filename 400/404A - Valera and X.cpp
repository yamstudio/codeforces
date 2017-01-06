#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  string s[n];
  char x, b;
  for (int i = 0; i < n; ++i) {
    cin >> s[i];
  }
  x = s[0][0];
  b = s[0][1];
  if (x != b) {
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (i == j or i + j == n - 1) {
          if (s[i][j] != x) {
            cout << "NO";
            return 0;
          }
        } else {
          if (s[i][j] != b) {
            cout << "NO";
            return 0;
          }
        }
      }
    }
    cout << "YES";
  } else {
    cout << "NO";
  }
}
