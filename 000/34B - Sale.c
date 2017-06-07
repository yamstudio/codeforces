#include <stdio.h>

int main() {
    int n, m, i, j, s = 0, l[100] = {0}, mv, mi, x;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; ++i) {
        scanf("%d", &x);
        if (x < 0) {
            x = -x;
            mv = 1001;
            mi = -1;
            for (j = 0; j < m; ++j) {
                if (l[j] < mv) {
                    mv = l[j];
                    mi = j;
                }
            }
            if (x > mv) {
                s += (x - mv);
                l[mi] = x;
            }
        }
    }
    printf("%d", s);
}
