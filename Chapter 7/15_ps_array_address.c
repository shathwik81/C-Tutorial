#include <stdio.h>

#define DIM1 2
#define DIM2 3
#define DIM3 4

int main()
{
    int arr[DIM1][DIM2][DIM3];
    printf("Addresses of the elements in the 3D array:\n");
    for (int i = 0; i < DIM1; i++)
    {
        for (int j = 0; j < DIM2; j++)
        {
            for (int k = 0; k < DIM3; k++)
            {
                printf("Address of arr[%d][%d][%d] = %p\n", i, j, k, (void *)&arr[i][j][k]);
            }
        }
    }
    return 0;
}