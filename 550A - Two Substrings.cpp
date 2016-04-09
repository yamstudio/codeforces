#include <iostream>
using namespace std;
int main() {
  string s;
  int a, b;
  bool p;
  cin >> s;
  a = s.find("AB");
  b = s.find("BA", a + 2);
  p = (a != -1 && b != -1);
  if (! p) {
    b = s.find("BA");
    a = s.find("AB", b + 2);
    p = (a != -1 && b != -1);
  }
  cout << (p ? "YES" : "NO");
}
