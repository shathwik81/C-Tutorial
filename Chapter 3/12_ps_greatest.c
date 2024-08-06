#include <stdio.h>

int main()
{
    int a, b, c, d, x, y;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the number\n");
    scanf("%d", &b);
    printf("Enter the number\n");
    scanf("%d", &c);
    printf("Enter the number\n");
    scanf("%d", &d);
    if (a > b)
    {
        x = a;
    }
    else
    {
        x = b;
    }
    if (c > d)
    {
        y = c;
    }
    else
    {
        y = d;
    }
    if (x > y)
    {
        printf("%d is the greatest\n", x);
    }
    else
    {
        printf("%d is the greatest\n", y);
    }
    return 0;
}