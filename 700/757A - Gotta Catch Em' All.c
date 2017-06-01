#include <stdio.h>

int main() {
    int q[128] = {0}, count;
    char c, *p, *n = "Bulbasr";
    while ((c = getchar()) > ' ')
        q[c]++;
    q['u'] /= 2;
    q['a'] /= 2;
    count = q['B'];
    for (p = n + 1; *p; p++) {
        if (count > q[*p])
            count = q[*p];
    }
    printf("%d\n", count);
}
