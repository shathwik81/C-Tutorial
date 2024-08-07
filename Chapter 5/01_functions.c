#include <stdio.h>

int sum(int a, int b);

int main()
{
    // sum(2, 4);
    // sum(324, 544);
    int a = sum(1, 3);
    printf("The sum of 1 and 3 is %d\n", a);
    return 0;
}

int sum(int a, int b)
{
    // printf("The sum of %d and %d is %d\n", a, b, a + b);
    return a + b;
}