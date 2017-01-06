#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  int u = 0, l = 0;
  string s;
  cin >> s;
  for (char& c : s) {
    if (c <= 90) {
      ++u;
    } else {
      ++l;
    }
  }
  transform(s.begin(), s.end(), s.begin(), (u > l ? ::toupper : ::tolower));
  cout << s;
}
