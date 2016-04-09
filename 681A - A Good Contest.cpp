#include <iostream>
using namespace std;
int main() {
  int b, a;
  string s;
  cin >> b;
  while (cin >> s >> b >> a) {
    if (b >= 2400 && a > b) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}
