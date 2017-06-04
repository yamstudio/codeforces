#include <stdio.h>
#include <string.h>

int main() {
    char s[20], d = 0, l, i;
    scanf("%s", s);
    l = strlen(s);
    for (i = 0; i < l / 2; ++i)
        d += (s[i] != s[l - 1 - i]);
    if (l % 2 && !d)
        d = 1;
    if (d == 1)
        printf("YES");
    else
        printf("NO");
}
