#include <iostream>
using namespace std;
int main() {
  char k, d;
  int n, a = 0, v[26] = {0};
  cin >> n;
  while (cin >> k >> d) {
    ++v[k - 'a'];
    d -= 'A';
    if (v[d]) {
      --v[d];
    } else {
      ++a;
    }
  }
  cout << a;
}
