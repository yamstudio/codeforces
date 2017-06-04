#include <stdio.h>

int main() {
    int n, s[100001] = {0}, c, t = 0, m = 0;
    scanf("%d\n", &n);
    n *= 2;
    while (n--) {
        scanf("%d", &c);
        if (s[c]) {
            --t;
            --s[c];
        } else {
            ++t;
            ++s[c];
        }
        if (m < t)
            m = t;
    }
    printf("%d\n", m);
}
