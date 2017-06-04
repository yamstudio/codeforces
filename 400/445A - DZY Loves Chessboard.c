#include <stdio.h>

int main() {
    int n, m, i, j;
    char c;
    scanf("%d %d\n", &n, &m);
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= m; ++j) {
            c = getchar();
            printf("%c", c == '.' ? ((i + j) % 2 ? 'W' : 'B') : c);
        }
        getchar();
        printf("\n");
    }
}
