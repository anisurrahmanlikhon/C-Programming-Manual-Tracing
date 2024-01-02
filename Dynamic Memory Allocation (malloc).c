#include <stdlib.h>
int main() {
    //! showMemory(start=272)
    int * p = malloc(4 * sizeof(int));
    int * q = malloc(1 * sizeof(int));
    free(q);
    int * r = malloc(2 * sizeof(int));
    return 0;
}
