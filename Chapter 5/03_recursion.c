#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, fact(n));
    return 0;
}

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return fact(n - 1) * n;
}