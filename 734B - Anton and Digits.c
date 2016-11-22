int main() {
    long long a[4], min1 = 1 << 23, min2;
    for (int i = 0; i < 4; ++i) {
        scanf("%I64d", a + i);
        if (i != 1)
            min1 = min1 > a[i] ? a[i] : min1;
    }
    a[0] -= min1;
    min2 = a[0] < a[1] ? a[0] : a[1];
    printf("%I64d", 256 * min1 + 32 * min2);
}