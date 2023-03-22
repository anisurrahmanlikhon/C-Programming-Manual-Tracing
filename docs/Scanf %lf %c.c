#include <stdio.h>
int main() {
    double d;
    char c;
    int r;
    r = scanf("%lf", &d);
    r = scanf("%c", &c);
    printf("|%lf| |%c|", d, c);
    return 0;
}
