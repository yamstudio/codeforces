int main() {
  int n, a, b;
  scanf("%d %d", &n, &a);
  if (n == 1) {
    if (a == 0) {
      printf("UP");
    } else if (a == 15) {
      printf("DOWN");
    } else {
      printf("-1");
    }
    return 0;
  }
  scanf("%d", &b);
  a += 2 * (b < a) * (15 - a) + n - 1;
  a %= 30;
  if (a <= 14) {
    printf("UP");
  } else {
    printf("DOWN");
  }
}
