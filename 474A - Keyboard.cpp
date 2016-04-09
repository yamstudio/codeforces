#include <iostream>
#include <string>
using namespace std;
int main() {
  char d;
  string key = "qwertyuiopasdfghjkl;zxcvbnm,./", s, p;
  cin >> d >> s;
  int a = (d == 'L' ? 1 : -1);
  for (char& c : s) {
    cout << key.at(key.find(c) + a);
  }
}
