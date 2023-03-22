#include <stdio.h>
int main (int argc, char** argv) {
    //! showVar(b)
    int b = 1;
    for (int a = 1; a < 1000000; a += 1) {
        b = b * a;
        printf("%d\n", b);
    }
    return 1;
}
