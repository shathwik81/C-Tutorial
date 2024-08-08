#include <stdio.h>

int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int x = 0; x < 3; x++)
    {
        for (int z = 0; z < 2; z++)
        {
            printf("The value of index[%d][%d] is %d\n", x, z, arr[x][z]);
        }
    }
    for (int p = 0; p < 3; p++)
    {
        for (int q = 0; q < 2; q++)
        {
            printf("%d ", arr[p][q]);
        }
        printf("\n");
    }
    return 0;
}