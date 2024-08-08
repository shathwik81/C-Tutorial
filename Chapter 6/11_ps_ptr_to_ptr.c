#include <stdio.h>

int main()
{
    int i = 42;
    int *ptr = &i;
    int **ptr_to_ptr = &ptr;
    printf("Value of i is %d\n", **ptr_to_ptr);
    return 0;
}