#include <stdio.h>

int main()
{
    int table[10], n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1);
    }
    for (int j = 0; j < 10; j++)
    {
        printf("%d X %d = %d\n", n, (j + 1), table[j]);
    }
    return 0;
}