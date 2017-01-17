#include <stdio.h>

int main() {
    int n, x, y, c = 0;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n + 1; ++i)
        scanf("%d", &a[i]);
    x = a[n - 1] - 1;
    y = a[n] - 1;
    for (int i = x; i < y; ++i)
        c += a[i];
    printf("%d", c);
}