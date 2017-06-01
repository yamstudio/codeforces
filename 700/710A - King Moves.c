#include <stdio.h>

int main() {
    char k[3];
    scanf("%s", k);
    printf("%d", (3 - (k[0] == 'a' || k[0] == 'h')) * (3 - (k[1] == '1' || k[1] == '8')) - 1);
}
