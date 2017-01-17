#include <iostream>
using namespace std;

int main() {
    int n, k, g, t;
    cin >> n >> k;
    string s;
    cin >> s;
    g = s.find("G");
    t = s.find("T");
    if (g < t) {
        for (int i = g; i < n; i += k) {
            if (i == t) {
                cout << "YES";
                return 0;
            } else if ((i > t) || (s[i] == '#'))
                break;
        }
    } else {
        for (int i = g; i >= 0; i -= k) {
            if (i == t) {
                cout << "YES";
                return 0;
            } else if ((i < t) || (s[i] == '#'))
                break;
        }
    }
    cout << "NO";
}
