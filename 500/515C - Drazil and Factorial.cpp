#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  string p[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
  string x;
  char c;
  cin >> n;
  while (n--) {
    cin >> c;
    x += p[c - '0'];
  }
  sort(x.begin(), x.end(), greater<char>());
  cout << x;
}
