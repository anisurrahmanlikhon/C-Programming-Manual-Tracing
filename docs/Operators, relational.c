#include <stdio.h>
int main() {
  int a = 1, b = 2;
  if (a == a) printf(" a == a\n");
  if (a != b) printf(" a != b\n");
  if (a < b) printf(" a < b\n");
  if (a <= a) printf(" a <= a\n");
  if (b > a) printf(" b > a\n");
  if (b >= b) printf(" b >= b\n");
}
