#include <stdio.h>

int main() {
    char *l = "8426";
    long long d;
    scanf("%I64d", &d);
    if (d)
        printf("%c", l[d % 4 ? d % 4 - 1 : 3]);
    else
        printf("1");
}
