#include <stdio.h>

int sum(int *a, int *b);

int main()
{
    int x = 43, y = 335;
    printf("The sum of %d and %d is %d\n", x, y, sum(&x, &y));
    return 0;
}

int sum(int *a, int *b)
{
    *a = 1;
    *b = 2;
    return *a + *b;
}