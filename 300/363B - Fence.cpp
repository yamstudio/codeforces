#include <iostream>
using namespace std;

int main() {
    int n, k, s = 0, m = 0, p;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        if (i < k)
            s += h[i];
    }
    p = s;
    for (int i = 1; i <= n - k; ++i) {
        int q = s - h[i - 1] + h[i + k - 1];
        if (p > q) {
            p = q;
            m = i;
        }
        s = q;
    }
    cout << m + 1;
}
