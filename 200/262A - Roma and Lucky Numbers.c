#include <stdio.h>

int main() {
    int n, k, d = 0, c, l = 0;
    scanf("%d %d\n", &n, &k);
    while ((c = getchar()) > 0) {
        if (c >= '0' && c <= '9')
            l += (c == '4' || c == '7');
        else {
            d += (l <= k);
            l = 0;
        }    
    }
    printf("%d", d);
}
