#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 43, b = 335;
    printf("The sum of %d and %d is %d\n", a, b, sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}