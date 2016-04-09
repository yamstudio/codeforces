#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i += 2) {
    string s = string((n - i) / 2, '*');
    cout << s << string(i, 'D') << s << endl;
  }
  for (int i = n - 2; i >= 1; i -= 2) {
    string s = string((n - i) / 2, '*');
    cout << s << string(i, 'D') << s << endl;
  }
}
