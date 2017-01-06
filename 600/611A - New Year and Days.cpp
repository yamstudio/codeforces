#include <iostream>
using namespace std;
int main() {
  const int m[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int n, c = 0;
  char x;
  cin >> n;
  cin >> x >> x >> x;
  if (x == 'w') {
    int d = (n + 3) % 7 + (n == 4 ? 7 : 0); 
    c = 1 + (366 - d) / 7;
  } else {
    for (int i = 0; i < 12; ++i) {
      if (m[i] >= n) {
        ++c;
      }
    }
  }
  cout << c;
}
