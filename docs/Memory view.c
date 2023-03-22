#include <stdio.h>
void show(int i, int j) {
    printf("i = %i, j = %i\n", i, j);
}
int main() {
    //! showMemory(extras=[i,*p], cursors=[k,&a[j][i],p], start=65504, cursorRows=2)
    int i = 0, j = 1, *k = &j;
    int a[3][2] = {0,1,2,3};
    char * p = ((char*)&a[1][1]) + 3;
    *k = 2;
    show(i, j);
    {
        int i = 1;
        j = 2;
        show(i, j);
    }
    show(i, j);
    return 0;
}
