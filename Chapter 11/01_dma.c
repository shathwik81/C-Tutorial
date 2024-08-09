#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3;
    ptr[1] = 2;
    ptr[2] = 10;
    printf("%d\n", ptr[2]);
    return 0;
}