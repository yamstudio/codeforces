#include <stdio.h>

int main() {
    int d[128] = {0}, n, c = 0;
    char s;
    scanf("%d\n", &n);
    if (n > 26) {
        printf("-1");
    } else {
        while (n--) {
            scanf("%c", &s);
            if (d[s])
                ++c;
            else
                d[s] = 1;
        }
        printf("%d", c);
    }
}
