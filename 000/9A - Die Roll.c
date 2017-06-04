#include <stdio.h>

int main() {
    int k, w, m;
    scanf("%d %d\n", &k, &w);
    m = 7 - (k > w ? k : w);
    switch (m) {
        case 6: printf("1/1");
            return 0;
        case 4: printf("2/3");
            return 0;
        case 3: printf("1/2");
            return 0;
        case 2: printf("1/3");
            return 0;
        default: printf("%d/6", m);
    }
}
