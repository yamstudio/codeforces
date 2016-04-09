#include <iostream>
using namespace std;
int main() {
  string a[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  string b[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  int n;
  cin >> n;
  if (n <= 19) {
    cout << a[n];
  } else {
    cout << b[n / 10 - 2];
    if (n % 10) {
      cout << '-' << a[n % 10];
    }
  }
}
