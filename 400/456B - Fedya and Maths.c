#include <stdio.h>

int main() {
    int c, p = -1, pp = -1, t, r2[4] = {2, 4, 8, 6}, r3[4] = {3, 9, 7, 1}, r4[2] = {4, 6};
    while (scanf("%1d", &c) > 0) {
        pp = p;
        p = c;
    }
    if (pp < 0 && !p)
        printf("4");
    else {
        pp = pp < 0 ? 0 : pp;
        t = 10 * pp + p;
        printf("%d", (1 + r2[(t + 3) % 4] + r3[(t + 3) % 4] + r4[(t + 1) % 2]) % 5); 
    }
}
