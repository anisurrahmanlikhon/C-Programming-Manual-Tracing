#include <stdio.h>
unsigned long strlen(const char * s) {
  unsigned long l = 0;
  while (*s++) ++l;
  return l;
}
int main() {
    int a, n;
    char s[12];
    printf("Enter a word and a number:\n");
    n = scanf("%s %d", s, &a);
    if (n == 2) {
        printf("word length * number value = %lu\n", strlen(s) * a);
    } else {
        printf("missing value!\n");
    }
    return 0;
}
