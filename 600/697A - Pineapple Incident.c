#include <stdio.h>

int main() {
    long t, s, x;
    scanf("%I32d %I32d %I32d\n", &t, &s, &x);
    x -= t;
    if (x < 0 || x == 1 || ((x - 1) % s && x % s))
        printf("NO");
    else
        printf("YES");
}
