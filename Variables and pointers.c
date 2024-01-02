#include <stdio.h>
int main() {
  int i = 0, j = 1, *k = &j;
  *k = 3;
  printf("i = %i, j = %i\n", i, j);
  {
    int i = 1;
    j = 2;
    printf("i = %i, j = %i\n", i, j);
  }
  printf("i = %i, j = %i\n", i, j);
}
