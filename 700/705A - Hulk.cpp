#include <iostream>
using namespace std;

int main() {
  int n;
  bool h = false;
  cin >> n;
  cout << "I hate ";
  --n;
  while (n--) {
    cout << "that I " << (h ? "hate " : "love ");
    h = ! h;
  }
  cout << "it";
}
