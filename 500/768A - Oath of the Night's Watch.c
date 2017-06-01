#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, cmin = 1, cmax = 1;
    unsigned long long s, smin = ULLONG_MAX, smax = 0;
    scanf("%d\n", &n);
    i = n;
    while (i--) {
        scanf("%I64u", &s);
        if (s == smin)
            ++cmin;
        else if (s < smin) {
            smin = s;
            cmin = 1;
        }
        if (s == smax)
            ++cmax;
        else if (s > smax) {
            smax = s;
            cmax = 1;
        }
    }
    printf("%d\n", n - cmin - (smin != smax) * cmax);
}
