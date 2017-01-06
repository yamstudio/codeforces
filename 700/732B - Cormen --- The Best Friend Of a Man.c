#include <stdio.h>

int main() {
    int n, k, a = 0;
    scanf("%d %d", &n, &k);
    int b[n];
    scanf("%d", b);
    for (int i = 1; i < n; ++i) {
        scanf("%d", b + i);
        if (b[i] + b[i - 1] < k) {
            a += k - b[i] - b[i - 1];
            b[i] = k - b[i - 1];
        }
    }
    printf("%d\n", a);
    for (int i = 0; i < n; ++i)
        printf("%d ", b[i]);
}