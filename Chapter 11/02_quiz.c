#include <stdio.h>
#include <stdlib.h>

void print_array(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%f\n", arr[i]);
    }
    printf("\n");
}

int main()
{
    float n = 15;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i;
    }
    print_array(ptr, n);
    return 0;
}