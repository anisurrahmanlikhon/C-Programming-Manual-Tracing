#include <stdio.h>
int main() {
  int k;
  if (1) {
    printf("t");
  }
  if (0) {
    printf("F");
  } else {
    printf("!f");
  }
  for (k = 0; k < 3; k++) {
    printf("%i", k);
  }
  while (k < 5) {
    printf("%i", k);
    ++k;
  }
  do {
    printf("%i", k);
    k += 1;
  } while (k < 7);
}
