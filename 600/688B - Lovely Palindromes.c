int main() {
  char *s = malloc(10000000);
  scanf("%s", s);
  printf("%s", s);
  strrev(s);
  printf("%s", s);
}
