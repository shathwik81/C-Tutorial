#include <stdio.h>

int main()
{
    int n, i = 10;
    printf("Enter the number\n");
    scanf("%d", &n);

    do
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i--;
    } while (i >= 1);
    return 0;
}