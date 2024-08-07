#include <stdio.h>

int avg(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the number\n");
    scanf("%d", &b);
    printf("Enter the number\n");
    scanf("%d", &c);
    printf("The average of %d, %d and %d is %d\n", a, b, c, avg(a, b, c));
    return 0;
}

int avg(int a, int b, int c)
{
    return (a + b + c) / 3;
}