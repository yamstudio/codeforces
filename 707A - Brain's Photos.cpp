#include <iostream>
using namespace std;

int main() {
  int n;
  char c;
  cin >> n >> n;
  while (cin >> c) {
    if (c != 'B' && c != 'W' && c != 'G') {
      cout << "#Color";
      return 0;
    }
  }
  cout << "#Black&White";
}
