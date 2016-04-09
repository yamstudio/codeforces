#include <iostream>
using namespace std;
int main() {
  string s;
  int n;
  cin >> s >> n;
  if (s.length() % n == 0) {
    int k = s.length() / n;
    for (int i = 0; i < s.length(); i += k) {
      for (int j = 0; j < k / 2; ++j) {
        if (s[i + j] != s[i + k - j - 1]) {
          cout << "NO";
          return 0;
        }
      }
    }
    cout << "YES";
  } else {
    cout << "NO";
  }
}
