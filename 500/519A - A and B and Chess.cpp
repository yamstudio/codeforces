#include <iostream>
#include <algorithm>
using namespace std;

int o(string& s, char& c) {
  return count(s.begin(), s.end(), c);
}

int main() {
  int a = 0, b = 0;
  for (int i = 0; i < 8; ++i) {
    string l;
    cin >> l;
    a += 9 * o(l, 'Q') + 5 * o(l, 'R') + 3 * o(l, 'B') + 3 * o(l, 'N') + o(l, 'P');
    b += 9 * o(l, 'q') + 5 * o(l, 'r') + 3 * o(l, 'b') + 3 * o(l, 'n') + o(l, 'p');
  }
  cout << (a > b ? "White" : (a = b ? "Draw" : "Black"));
}
