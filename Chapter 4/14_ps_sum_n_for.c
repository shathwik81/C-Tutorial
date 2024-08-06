#include <stdio.h>

int main()
{
    int n = 10, sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}