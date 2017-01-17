#include <stdio.h>

int main() {
    int n, m = 1, c = 1;
    long long p = 1 << 30, a;
    scanf("%d", &n);
    while (n--) {
        scanf("%I64d", &a);
        if (a > p)
            ++c;
        else
            c = 1;
        m = m > c ? m : c;
        p = a;
    }
    printf("%d", m);
}