#include <stdio.h>
#include <string.h>

int main() {
    char s[102];
    int l, a[102][8] = {0}, i, j, d;
    long long p[102][8] = {0};
    scanf("%s", s + 1);
    *s = '0';
    l = strlen(s);
    for (i = 1; i < l; ++i) {
        d = s[i] - '0';
        a[i][d % 8] = 1;
        p[i][d % 8] = d;
        for (j = 0; j < 8; ++j) {
            if (a[i - 1][j] && !a[i][(j * 10 + d) % 8]) {
                a[i][(j * 10 + d) % 8] = 1;
                p[i][(j * 10 + d) % 8] = 10 * p[i - 1][j] + d;
            }
        }
        for (j = 0; j < 8; ++j) {
            if (a[i - 1][j] && !a[i][j]) {
                a[i][j] = 1;
                p[i][j] = p[i - 1][j];
            }
        }
        if (a[i][0]) {
            printf("YES\n%I64d", p[i][0]);
            return 0;
        }
    }
    printf("NO");
}
