#include <stdio.h>

int main() {
    int n, k, u = 1, e = -1, c;
    scanf("%d %d\n", &n, &k);
    int l[n + 1];
    char s[101];
    for (int i = 0; i <= n; ++i) {
        scanf("%s", s);
        l[i] = strlen(s);
    }
    c = l[n];
    for (int i = 0; i < n; ++i) {
        if (l[i] == c) ++e;
        if (l[i] < c) ++u;
    }
    e += u;
    printf("%d %d\n", u + 5 * ((u - 1) / k), e + 5 * ((e - 1) / k));
}
