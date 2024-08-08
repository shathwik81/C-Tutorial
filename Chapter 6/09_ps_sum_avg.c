#include <stdio.h>

int sum(int *a, int *b);
int avg(int *a, int *b);

int main()
{
    int a = 34, b = 56;
    printf("The sum is %d\n", sum(&a, &b));
    printf("The average is %d\n", avg(&a, &b));
    return 0;
}
int sum(int *a, int *b)
{
    return *a + *b;
}
int avg(int *a, int *b)
{
    return (*a + *b) / 2;
}