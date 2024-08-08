#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The Value at address j is %d\n", *j);
    printf("The Value at address j is %d\n", *(&i));
    return 0;
}