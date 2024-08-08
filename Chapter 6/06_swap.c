#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 2, b = 3;
    swap(&a, &b);
    printf("The vale of a is %d\n", a);
    printf("The vale of b is %d\n", b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}