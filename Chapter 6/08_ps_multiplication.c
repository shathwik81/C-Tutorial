#include <stdio.h>

int multi(int *a, int *b);

int main()
{
    int a = 43, b = 75;
    printf("%d X %d = %d\n", a, b, multi(&a, &b));
    return 0;
}

int multi(int *a, int *b)
{
    return *a * *b;
}