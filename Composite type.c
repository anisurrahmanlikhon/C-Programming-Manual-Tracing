#include <stdio.h>
int main() {
 
    // array of pointer to int
    int *a[1];
    int a_value = 1;
    a[0] = &a_value;
 
    // declare b as pointer to array of int
    int (*b)[];
    int b_value[1];
    b = &b_value;
 
    // declare foo as array 3 of array 2 of pointer to pointer to function returning pointer to array of pointer to char
    char *(*(**foo[3][2])())[];
 
    return 0;
}
