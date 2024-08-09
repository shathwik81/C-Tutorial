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
    free(ptr);
    printf("%d\n", ptr[0]);
    return 0;
}