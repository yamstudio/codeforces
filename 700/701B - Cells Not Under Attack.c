#include <stdio.h>

int main() {
    int n, m, i, x, y;
    int r[100001] = {0}, c[100001] = {0};
    long long rc, cc;
    scanf("%d %d", &n, &m);
    rc = n;
    cc = n;
    while (m--) {
        scanf("%d %d", &x, &y);
        if (! r[x]) {
            r[x] = 1;
            --rc;
        }
        if (! c[y]) {
            c[y] = 1;
            --cc;
        }
        printf("%I64d ", rc * cc);
    }
}
