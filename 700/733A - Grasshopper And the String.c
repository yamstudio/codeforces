#include <stdio.h>

int main() {
    char buf[256], vowels[7] = "AEIOUY";
    int prev = -1, curr = 0, j = 1;
    scanf("%s", buf);
    while (buf[curr]) {
        for (int i = 0; i < 6; ++i) {
            if (vowels[i] == buf[curr]) {
                j = j > curr - prev ? j : curr - prev;
                prev = curr;
                continue;
            }
        }
        ++curr;
    }
    j = j > curr - prev ? j : curr - prev;
    printf("%d", j);
}