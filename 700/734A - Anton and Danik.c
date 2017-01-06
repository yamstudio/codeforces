int main() {
    int n, a = 0, b = 0;
    char c;
    scanf("%d\n", &n);
    while (n--) {
        scanf("%c", &c);
        if (c == 'A')
            ++a;
        else
            ++b;
    }
    if (a > b)
        printf("Anton");
    else if (a < b)
        printf("Danik");
    else
        printf("Friendship");
}