#include <stdio.h>

int countPositiveIntegers(int arr[], int size);

int main()
{
    int arr[] = {-1, 2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int positiveCount = countPositiveIntegers(arr, size);

    printf("Number of positive integers: %d\n", positiveCount);
    return 0;
}

int countPositiveIntegers(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}