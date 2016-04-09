#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  int n;
  unordered_map<string, int> m;
  string s;
  cin >> n;
  while (cin >> s) {
    if (m[s]++) {
      cout << s << m[s] - 1 << endl;
    } else {
      cout << "OK" << endl;
    }
  }
}
