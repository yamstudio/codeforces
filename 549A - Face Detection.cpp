#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, m, cnt = 0;
  cin >> n >> m;
  char c[n][m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> c[i][j];
    }
  }
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < m - 1; ++j) {
      string s;
      for (int k = 0; k < 2; ++k) {
        for (int l = 0; l < 2; ++l) {
          s.push_back(c[i + k][j + l]);
        }
      }
      sort(s.begin(), s.end());
      if (s == "acef") {
        ++cnt;
      }
    }
  }
  cout << cnt;
}
