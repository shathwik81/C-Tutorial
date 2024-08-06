#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    do
    {
        // printf("%d X %d = %d\n", n, i, n * i);
        sum += n * i;
        i++;
    } while (i <= 10);
    printf("%d\n", sum);
    return 0;
}