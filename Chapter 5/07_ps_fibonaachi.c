#include <stdio.h>

int fibonacciRecursive(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Number of terms should be at least 1.\n");
    }
    else
    {
        printf("Fibonacci Series: ");
        for (int i = 0; i < n; ++i)
        {
            printf("%d, ", fibonacciRecursive(i));
        }
        printf("\n");
    }
    return 0;
}
