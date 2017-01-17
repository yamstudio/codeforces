#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, d, c = 0, x, y, m = 0, b, t = 0;
    cin >> n >> d;
    pair<long long, long long> a[n];
    for (long long i = 0; i < n; ++i) {
        cin >> x >> y;
        a[i] = make_pair(x, y);
    }
    sort(a, a + n);
    for (long long i = 0; i < n; ++i) {
        b = a[i].first + d;
        if (i)
            c -= a[i - 1].second;
        while ((a[t].first < b) && (t < n)) {
            c += a[t].second;
            ++t;
        }
        m = m > c ? m : c;
        if (t == n)
            break;
    }
    cout << m;
}
