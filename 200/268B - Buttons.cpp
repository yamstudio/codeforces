#include <iostream>
using namespace std;
int main() {
  int n;
  long long a;
  cin >> n;
  a = n;
  for (int i = 1; i < n; ++i) {
    a += i * (n - i);
  }
  cout << a;
}
