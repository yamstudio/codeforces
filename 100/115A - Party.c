#include <stdio.h>

int p[2000], l[2000];

int get_level(int a) {
    if (! l[a]) {
        if (p[a] < 0)
            l[a] = 1;
        else
            l[a] = get_level(p[a] - 1) + 1;
    }
    return l[a];
}

int main() {
    int n, m = 1;
    scanf("%d\n", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d\n", &p[i]);
    for (int i = 0; i < n; ++i) {
        get_level(i);
        m = m > l[i] ? m : l[i];
    }
    printf("%d", m);
}
