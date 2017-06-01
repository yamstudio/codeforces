#include <stdio.h>
#include <stdlib.h>

int comp(const void *e1, const void *e2) {
    if (*(long long *)e1 > *(long long *)e2) return 1;
    if (*(long long *)e1 < *(long long *)e2) return -1;
    return 0;
}

int main() {
    int n, i;
    long long l[100000];
    scanf("%d\n", &n);
    for (i = 0; i < n; ++i)
        scanf("%I64d", l + i);
    qsort(l, n, sizeof(long long), comp);
    for (i = 0; i <= n - 3; ++i) {
        if (l[i + 2] < l[i] + l[i + 1]) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}

