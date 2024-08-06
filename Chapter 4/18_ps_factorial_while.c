#include <stdio.h>

int main()
{
    int fact = 1, n = 5, i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}