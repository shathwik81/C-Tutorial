#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The Value at address j is %c\n", *j);
    printf("The Value at address j is %c\n", *(&i));
    return 0;
}