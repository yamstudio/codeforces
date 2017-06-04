#include <stdio.h>

#define g(x, i) (x / 5 + (x % 5 >= (i)))

int main() {
    long long m, n, c = 0;
    int i;
    scanf("%I64d %I64d\n", &n, &m);
    for (i = 0; i < 5; ++i)
        c += g(n, i ? i : 5) * g(m, 5 - i);
    printf("%I64d", c);
}
