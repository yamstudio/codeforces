#include <stdio.h>

int main() {
    int n, p = -1, i, x;
    long long c = 0;
    scanf("%d\n", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &x);
        if (x) {
            if (p >= 0)
                c *= (i - p);
            else
                c = 1;
            p = i;
        }
    }
    printf("%I64d", c);
}
