#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = a;
    printf("The value at address %u is %d\n", ptr + 2, *(ptr + 3));
    printf("The address of a[3] is %u\n", ptr + 2);
    return 0;
}