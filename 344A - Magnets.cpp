#include <iostream>
using namespace std;
int main() {
  int n, g = 0;
  string prev, curr;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> curr;
    if (curr != prev) {
      ++g;
    }
    prev = curr;
  }
  cout << g;
}
