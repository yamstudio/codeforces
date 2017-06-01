#include <stdio.h>

int fact(n) {
    int i, ans;
    for (i = 1, ans = 1; i <= n; ++i)
        ans *= i;
    return ans;
}

int main() {
    int p = 0, m = 0;
    char s[20], *c;
    scanf("%s", s);
    c = s;
    while (*c) {
        if (*c == '+')
            ++p;
        else
            ++m;
        ++c;
    }
    scanf("%s", s);
    c = s;
    while (*c) {
        if (*c == '+')
            --p;
        else if (*c == '-')
            --m;
        ++c;
    }
    if (p < 0 || m < 0) {
        printf("%f\n", 0);
        return 0;
    } else if (! (p || m)) {
        printf("%f\n", 1.0);
        return 0;
    }
    printf("%.15f", (double)fact(p + m) / ((double)fact(p) * (double)fact(m) * (double)(1 << (p + m))));
}
