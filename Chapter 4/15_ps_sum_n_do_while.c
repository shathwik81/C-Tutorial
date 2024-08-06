#include <stdio.h>

int main()
{
    int n = 10, sum = 0, i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("The sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}