#include <stdio.h>

int main() {
    int n, s = 100001, e = 100001, m = 0, i, a[100001];
    long long t, c;
    scanf("%d %I64d\n", &n, &t);
    for (i = 1; i <= n; ++i) {
        scanf("%d", a + i);
        if ((s == 100001) && a[i] <= t) {
            s = i;
            e = i;
            c = a[i];
            m = 1;
        }
    }
    while (e < n) {
        if (c + a[e + 1] <= t) {
            c += a[e + 1];
            ++e;
        } else {
            if (s == e) {
                for (i = e + 1; ; ++i) {
                    if (a[i] <= t || i == n) {
                        s = i;
                        e = i;
                        c = a[i];
                        break;
                    }
                }
            } else {
                c -= a[s];
                ++s;
            }
        }
        if (e - s + 1 > m)
            m = e - s + 1;
    }
    printf("%d", m);
}
