int main() {
    long long n, s = 0, c = 0, w1 = 0, w2 = 0, i = 0;
    scanf("%lld", &n);
    long a[n];
    for (; i < n; ++i) {
        scanf("%I64d", a + i);
        s += a[i];
    }
    if (s % 3) {
        printf("0");
        return 0;
    }
    s /= 3;
    for (i = 0; i < n - 1; ++i) {
        c += a[i];
        if (c == 2 * s)
            w2 += w1;
        if (c == s)
            ++w1;
    }
    printf("%I64d", w2);
}