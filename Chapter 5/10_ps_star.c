#include <stdio.h>

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printPattern(n);
    }

    return 0;
}
