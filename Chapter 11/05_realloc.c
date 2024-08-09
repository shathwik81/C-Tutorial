#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    puts("Enter the number");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    print_array(ptr, n);
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    print_array(ptr, 10);
    return 0;
}