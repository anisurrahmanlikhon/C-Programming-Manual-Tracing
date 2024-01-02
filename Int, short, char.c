#include <stdio.h>
int main() {
  char c = '*', d = 127;
  unsigned char e = d + 1;
  int i = c, j = 0x1002A;
  short  s = j;
  printf("%i %i %i %u\n", i, j, s, e);
}
