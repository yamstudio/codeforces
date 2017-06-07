#include <stdio.h>

int main() {
    int n, b, d, c = 0, a = 0, x;
    scanf("%d %d %d\n", &n, &b, &d);
    while (n--) {
        scanf("%d", &x);
        if (x <= b) {
            a += x;
            if (a > d) {
                ++c;
                a = 0; 
            }
        }
    }
    printf("%d", c);
}
