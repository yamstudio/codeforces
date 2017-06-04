#include <stdio.h>

#define min(x, y) (x > y ? y : x)

int main() {
    int n, i, c, t[101][3] = {0};
    scanf("%d\n", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &c);
        t[i][0] = min(t[i - 1][0], min(t[i - 1][1], t[i - 1][2])) + 1;
        if (! c) {
            t[i][1] = 101;
            t[i][2] = 101;
        } else if (c == 3) {
            t[i][1] = min(t[i - 1][0], t[i - 1][2]);
            t[i][2] = min(t[i - 1][0], t[i - 1][1]);
        } else {
            t[i][c] = min(t[i - 1][0], t[i - 1][3 - c]);
            t[i][3 - c] = 101;
        }
    }
    printf("%d\n", min(t[n][0], min(t[n][1], t[n][2])));
}
