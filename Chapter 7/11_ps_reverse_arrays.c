#include <stdio.h>

void print_array(int arr[], int n);
void reverse_array(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}, size = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, size);
    reverse_array(arr, size);
    print_array(arr, size);
    return 0;
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse_array(int arr[], int n)
{
    int temp;
    for (int j = 0; j < n / 2; j++)
    {
        int temp = arr[j];
        arr[j] = arr[n - j - 1];
        arr[n - j - 1] = temp;
    }
}