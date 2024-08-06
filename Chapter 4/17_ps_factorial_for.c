#include <stdio.h>

int main()
{
    int fact = 1, n = 5;
    for (int i = 1; i <= n; i++)
    {
        if (n == 1 || n == 0)
        {
            fact = 1;
            break;
        }
        fact *= i;
    }
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}