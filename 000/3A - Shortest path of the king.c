#include <stdio.h>

#define max(x, y) (x > y ? x : y)
#define abs(x) (x > 0 ? x : -(x))

int main(){
    char s1[2], s2[2];
    int h, v;
    scanf("%s\n%s\n", s1, s2);
    h = s2[0] - s1[0];
    v = s2[1] - s1[1];
    printf("%d\n", max(abs(h), abs(v)));
    while (h || v) {
        if (h > 0) {
            printf("R");
            --h;
        } else if (h < 0) {
            printf("L");
            ++h;
        }
        if (v > 0) {
            printf("U");
            --v;
        } else if (v < 0) {
            printf("D");
            ++v;
        }
        printf("\n");
    }
}
