#include <stdio.h>

int main() {
    int n, b[10] = {0}, d = 1, c, m = 0;
    scanf("%d", &n);
    while (n) {
        c = n % 10;
        for (int i = 0; i < c; ++i)
            b[i] += d;
        if (c > m) m = c;
        d *= 10;
        n /= 10;
    }
    printf("%d\n", m);
    for (int i = 0; i < m; ++i)
        printf("%d ", b[i]);
    printf("\n");
}