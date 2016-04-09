#include <iostream>
#include <set>
using namespace std;
int main() {
  char c;
  set<char> s;
  while (cin >> c) {
    if (isalpha(c)) {
      s.insert(c);
    }
  }
  cout << s.size();
}
