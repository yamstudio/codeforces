#include <iostream>
#include <set>
#include <cstring>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n >= 26) {
    char c;
    set<char> s;
    while (cin >> c) {
      s.insert(tolower(c));
    }
    if (s.size() == 26) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}
