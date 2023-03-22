#include <stdio.h>
int main() {
  int k = 0;
  printf("%i", k && k++);
  printf("%i", k || k++);
  printf("%i", k || k++);
  printf("%i", k && k++);
}
