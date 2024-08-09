#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i * i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    printf("\n\n\n");
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i * i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}