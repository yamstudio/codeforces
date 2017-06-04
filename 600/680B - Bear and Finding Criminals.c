#include <stdio.h>

int main() {
    int n, a, i, t[101], c;
    scanf("%d %d\n", &n, &a);
    for (i = 1; i <= n; ++i)
        scanf("%d", t + i);
    c = t[a];
    for (i = 1; a - i >= 1 || a + i <= n; ++i) {
        if (a - i >= 1) {
            if (a + i <= n)
                c += 2 * (t[a - i] && t[a + i]);
            else
                c += t[a - i];
        } else
            c += t[a + i];
    }
    printf("%d\n", c);
}
