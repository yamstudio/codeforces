#include <stdio.h>

#define re(a, b) (((a) <= (b + 1) / 2) && ((a) % 2))

int main() {
    int n, i;
    long long a[200001];
    scanf("%d\n", &n);
    for (i = 1; i <= n; ++i)
        scanf("%I64d", a + i);
    for (i = 1; i <= n; ++i) {
        if (re(i, n) || re(n - i + 1, n))
            printf("%I64d ", a[n - i + 1]);
        else
            printf("%I64d ", a[i]);
    }
}
