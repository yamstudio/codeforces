#include <stdio.h>
#include <string.h>

int main() {
    int n, s1 = -1, s2 = -1;
    char b[11], t1[11], t2[11];
    scanf("%d\n", &n);
    while (n--) {
        scanf("%s", b);
        if (s1 < 0) {
            strncpy(t1, b, 11);
            ++s1;
        } else if (! strcmp(b, t1))
            ++s1;
        else if (s2 < 0) {
            strncpy(t2, b, 11);
            ++s2;
        } else
            ++s2;
    }
    printf(s1 > s2 ? t1 : t2);
}
