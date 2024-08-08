#include <stdio.h>

int main()
{
    int table[3][10];
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = 2 * (i + 1);
        table[1][i] = 7 * (i + 1);
        table[2][i] = 9 * (i + 1);
    }
    printf("Multiplication table for 2:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("2 x %d = %d\n", i + 1, table[0][i]);
    }
    printf("\nMultiplication table for 7:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("7 x %d = %d\n", i + 1, table[1][i]);
    }
    printf("\nMultiplication table for 9:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("9 x %d = %d\n", i + 1, table[2][i]);
    }
    return 0;
}