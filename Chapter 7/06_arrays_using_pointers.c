#include <stdio.h>

int main()
{
    int marks[] = {12, 56, 23, 76};
    // int *ptr = marks; // Both are same
    int *ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}