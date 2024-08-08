#include <stdio.h>

int x10(int *a);

int main()
{
    int a = 43;
    printf("%d X 10 = %d\n", a, x10(&a));
    return 0;
}

int x10(int *a)
{
    return *a * 10;
}