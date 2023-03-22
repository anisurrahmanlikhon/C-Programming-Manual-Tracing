#include <stdio.h>
int main() {
  int a = 3, *b;
  printf("%i\n", +a);
  printf("%i\n", -a);
  printf("%i\n", !a);
  printf("%i\n", ~a);
  b = &a;
  printf("%i\n", *b);
  printf("%lu\n", sizeof(a));
}
