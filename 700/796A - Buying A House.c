#include <stdio.h>

#define abs(x) ((x) > 0 ? (x) : -(x))

int main() {
    int d = 200, n, m, k, h, i;
    scanf("%d %d %d\n", &n, &m, &k);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &h);
        if (h && h <= k && d > abs(i - m))
            d = abs(i - m);
    }
    printf("%d", d * 10);
}
