#include <stdio.h>

int main() {
    int n, a, b, ca, cb, i, u;
    scanf("%d %d %d\n", &n, &a, &b);
    for (i = 1; i <= n; ++i) {
        scanf("%c", &u);
        if (i == a)
            ca = u;
        if (i == b)
            cb = u;
    }
    printf("%d\n", ca != cb);
}
