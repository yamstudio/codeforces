#include <stdio.h>

int main() {
    char *s = malloc(101);
    scanf("%s\n", s);
    int prev = 0, curr, diff, c = 0;
    for (; *s; ++s) {
        curr = *s - 'a';
        diff = curr > prev ? curr - prev : prev - curr;
        c += diff <= 13 ? diff : 26 - diff;
        prev = curr;
    }
    printf("%d", c);
}
