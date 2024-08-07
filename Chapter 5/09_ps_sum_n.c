#include <stdio.h>

int sumOfNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfNaturalNumbers(n - 1);
}

int main()
{
    int n;
    printf("Enter the number of natural numbers to sum: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        int result = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, result);
    }
    return 0;
}
