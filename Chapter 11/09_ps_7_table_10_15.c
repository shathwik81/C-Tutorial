#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", 7, i + 1, 7 * (i + 1));
    }
    printf("\n\n\n");
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("%d X %d = %d\n", 7, i + 1, 7 * (i + 1));
    }
}