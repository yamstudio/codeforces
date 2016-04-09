#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int a = s.find("WUB");
  while (a != -1) {
    s.replace(a, 3, " ");
    a = s.find("WUB");
  }
  cout << s;
}
