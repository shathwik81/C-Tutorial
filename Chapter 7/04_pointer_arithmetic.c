#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);

    char b = '$';
    char *ptr2 = &b;
    printf("The address of a is %u\n", &b);
    printf("The address of a is %u\n", ptr2);
    ptr2++;
    printf("The value of ptr2 is %u\n", ptr2);
    return 0;
}