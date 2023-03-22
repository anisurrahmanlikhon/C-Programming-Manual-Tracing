#include <stdio.h>
int a = 1;
int b = 2;
int main() {
    printf("&a = %p  &b = %p\n", &a, &b);
    printf("a = %d\n", a);
    a += 1;
    printf("a = %d\n", a);
}
