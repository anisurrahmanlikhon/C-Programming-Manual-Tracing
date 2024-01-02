#include <stdio.h>
int a[][2] = {{1, 2}, {3, 4}};
int main() {
    printf("%d %d\n", a[0][0], a[0][1]);
    printf("%d %d\n", a[1][0], a[1][1]);
    printf("%d %d %d %d\n", **a, *(*a + 1), **(a + 1), *(*(a + 1) + 1));
}
